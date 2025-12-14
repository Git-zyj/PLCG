#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)10892;
signed char var_7 = (signed char)71;
signed char var_9 = (signed char)-69;
unsigned short var_12 = (unsigned short)41839;
int zero = 0;
unsigned short var_16 = (unsigned short)38536;
int var_17 = 1078430226;
int var_18 = -289721540;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
