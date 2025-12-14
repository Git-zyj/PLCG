#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
short var_5 = (short)28018;
unsigned char var_6 = (unsigned char)253;
unsigned int var_7 = 3655667044U;
signed char var_8 = (signed char)104;
signed char var_10 = (signed char)97;
unsigned long long int var_13 = 2192791892204568216ULL;
int zero = 0;
short var_14 = (short)17326;
unsigned int var_15 = 3428261395U;
short var_16 = (short)16318;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
