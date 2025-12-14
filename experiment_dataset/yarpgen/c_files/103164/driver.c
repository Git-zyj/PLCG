#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2286;
int var_1 = -1641493913;
signed char var_2 = (signed char)115;
int var_3 = 2086448311;
int var_6 = 1177937732;
unsigned int var_7 = 3929504716U;
unsigned int var_10 = 2001200828U;
int zero = 0;
unsigned short var_13 = (unsigned short)64823;
unsigned int var_14 = 3596295588U;
unsigned short var_15 = (unsigned short)30294;
unsigned long long int var_16 = 16904785346015284936ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
