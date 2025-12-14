#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7120;
long long int var_6 = -7211316729583556771LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)56214;
unsigned char var_12 = (unsigned char)175;
signed char var_14 = (signed char)57;
int var_15 = -551980647;
int zero = 0;
unsigned short var_16 = (unsigned short)16999;
unsigned long long int var_17 = 3509681105970013038ULL;
unsigned char var_18 = (unsigned char)226;
void init() {
}

void checksum() {
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
