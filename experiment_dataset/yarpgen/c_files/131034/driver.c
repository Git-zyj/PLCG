#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)106;
signed char var_5 = (signed char)118;
unsigned int var_7 = 3511953157U;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)45417;
int zero = 0;
signed char var_12 = (signed char)-58;
signed char var_13 = (signed char)-75;
void init() {
}

void checksum() {
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
