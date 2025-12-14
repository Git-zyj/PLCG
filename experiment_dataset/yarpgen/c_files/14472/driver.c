#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3616101465U;
unsigned char var_3 = (unsigned char)248;
unsigned long long int var_4 = 12957933455549255959ULL;
unsigned int var_6 = 2927199769U;
unsigned short var_7 = (unsigned short)4185;
unsigned short var_10 = (unsigned short)17435;
unsigned int var_11 = 3981884683U;
unsigned char var_12 = (unsigned char)66;
unsigned short var_15 = (unsigned short)43803;
short var_17 = (short)-7711;
int zero = 0;
unsigned char var_19 = (unsigned char)179;
unsigned short var_20 = (unsigned short)7756;
unsigned char var_21 = (unsigned char)47;
unsigned char var_22 = (unsigned char)190;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
