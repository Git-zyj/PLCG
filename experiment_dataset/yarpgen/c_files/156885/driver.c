#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2038109488;
short var_1 = (short)16534;
unsigned char var_2 = (unsigned char)243;
unsigned int var_3 = 4158048158U;
int var_4 = -398906475;
signed char var_6 = (signed char)73;
int var_7 = -966324656;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-26728;
short var_12 = (short)-23716;
unsigned int var_13 = 505175178U;
unsigned char var_15 = (unsigned char)115;
unsigned char var_17 = (unsigned char)56;
unsigned int var_18 = 1526846378U;
int zero = 0;
unsigned int var_19 = 2179549918U;
short var_20 = (short)-10069;
short var_21 = (short)20953;
void init() {
}

void checksum() {
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
