#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1714966238;
unsigned char var_1 = (unsigned char)232;
signed char var_3 = (signed char)-86;
unsigned short var_4 = (unsigned short)20150;
unsigned long long int var_5 = 10028904232060462047ULL;
unsigned short var_7 = (unsigned short)48372;
unsigned int var_10 = 68562152U;
signed char var_13 = (signed char)0;
signed char var_14 = (signed char)84;
int zero = 0;
short var_17 = (short)-22268;
unsigned short var_18 = (unsigned short)56099;
unsigned long long int var_19 = 10509338875907458417ULL;
signed char var_20 = (signed char)2;
short var_21 = (short)28953;
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
