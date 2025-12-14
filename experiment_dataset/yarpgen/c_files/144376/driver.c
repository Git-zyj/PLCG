#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-89;
signed char var_4 = (signed char)45;
unsigned int var_5 = 1241402172U;
unsigned int var_6 = 178343002U;
short var_7 = (short)-21538;
unsigned char var_10 = (unsigned char)68;
int zero = 0;
long long int var_11 = -4432013166839046219LL;
long long int var_12 = 2555730899084817594LL;
short var_13 = (short)6956;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
