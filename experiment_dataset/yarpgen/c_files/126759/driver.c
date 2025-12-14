#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)63962;
unsigned int var_7 = 1866794232U;
unsigned int var_8 = 837465918U;
signed char var_9 = (signed char)99;
unsigned char var_11 = (unsigned char)236;
int var_16 = -283617805;
unsigned short var_17 = (unsigned short)8269;
unsigned long long int var_18 = 4611942815404915159ULL;
int zero = 0;
unsigned int var_19 = 744890350U;
unsigned char var_20 = (unsigned char)204;
short var_21 = (short)-6701;
short var_22 = (short)-20111;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
