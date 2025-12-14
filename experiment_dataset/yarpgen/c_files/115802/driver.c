#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54310;
unsigned int var_2 = 1831581835U;
signed char var_5 = (signed char)21;
unsigned char var_6 = (unsigned char)179;
unsigned short var_8 = (unsigned short)7859;
unsigned long long int var_9 = 2982875980242787931ULL;
unsigned char var_10 = (unsigned char)182;
unsigned int var_14 = 1560037994U;
unsigned short var_15 = (unsigned short)15632;
unsigned short var_16 = (unsigned short)16023;
int zero = 0;
unsigned char var_17 = (unsigned char)165;
long long int var_18 = -5381016422884852575LL;
unsigned int var_19 = 2852450366U;
long long int var_20 = -6033735392747535673LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
