#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1352319194;
short var_1 = (short)564;
signed char var_2 = (signed char)7;
signed char var_3 = (signed char)-79;
unsigned int var_4 = 3217216288U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)80;
int var_7 = -1904938969;
unsigned short var_8 = (unsigned short)34559;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-31556;
unsigned long long int var_12 = 7399640626822868001ULL;
unsigned char var_14 = (unsigned char)15;
unsigned long long int var_16 = 13530792983676600850ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)166;
long long int var_19 = 3575980006843720006LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
