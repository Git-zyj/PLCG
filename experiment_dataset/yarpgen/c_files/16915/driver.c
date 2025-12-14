#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)59198;
int var_6 = -909138902;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3666203341U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 4719514622164620417ULL;
short var_16 = (short)-6315;
int var_17 = 931497799;
unsigned short var_18 = (unsigned short)54969;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
