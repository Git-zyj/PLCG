#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1391901952U;
signed char var_2 = (signed char)70;
int var_4 = 1257032986;
short var_5 = (short)-1382;
int zero = 0;
unsigned short var_11 = (unsigned short)14388;
int var_12 = -1341156871;
unsigned long long int var_13 = 11737222566390215652ULL;
unsigned int var_14 = 3334278702U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
