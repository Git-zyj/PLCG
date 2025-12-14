#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 115373521U;
unsigned char var_1 = (unsigned char)249;
unsigned char var_5 = (unsigned char)56;
unsigned int var_11 = 2817552724U;
short var_12 = (short)-13328;
unsigned char var_13 = (unsigned char)92;
_Bool var_15 = (_Bool)0;
int var_16 = 674027755;
int zero = 0;
int var_17 = 1741721522;
short var_18 = (short)-9243;
unsigned char var_19 = (unsigned char)195;
unsigned short var_20 = (unsigned short)46806;
unsigned int var_21 = 1800165005U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
