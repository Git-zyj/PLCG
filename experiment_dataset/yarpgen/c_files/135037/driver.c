#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
long long int var_1 = -3462338833653501321LL;
unsigned int var_4 = 741814793U;
unsigned short var_5 = (unsigned short)25263;
unsigned char var_6 = (unsigned char)29;
unsigned short var_7 = (unsigned short)13022;
unsigned int var_8 = 1784614107U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 15450373350866936864ULL;
unsigned int var_12 = 3644914013U;
short var_13 = (short)-19730;
unsigned long long int var_14 = 13242955694545443228ULL;
short var_15 = (short)14169;
unsigned int var_16 = 690084718U;
unsigned char var_17 = (unsigned char)53;
int zero = 0;
short var_20 = (short)11635;
unsigned char var_21 = (unsigned char)33;
unsigned long long int var_22 = 15551266031410809289ULL;
int var_23 = -1976425830;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
