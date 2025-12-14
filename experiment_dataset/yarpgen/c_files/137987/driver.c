#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49620;
unsigned int var_1 = 1968822875U;
signed char var_2 = (signed char)-117;
signed char var_3 = (signed char)-46;
unsigned long long int var_4 = 13888964743403106581ULL;
short var_5 = (short)6420;
unsigned int var_6 = 3906225521U;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-44;
int var_13 = -2078975937;
unsigned long long int var_14 = 14107014731907029678ULL;
int zero = 0;
long long int var_15 = -4965403543974669600LL;
unsigned int var_16 = 3806115361U;
unsigned short var_17 = (unsigned short)64901;
short var_18 = (short)12646;
short var_19 = (short)-6646;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
