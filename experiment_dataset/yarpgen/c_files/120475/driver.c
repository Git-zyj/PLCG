#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)238;
signed char var_3 = (signed char)-111;
signed char var_6 = (signed char)-69;
unsigned long long int var_7 = 14361703011952988227ULL;
unsigned int var_10 = 3625766520U;
long long int var_13 = -8659597203872696338LL;
short var_16 = (short)-30390;
short var_18 = (short)-32129;
unsigned short var_19 = (unsigned short)12374;
int zero = 0;
unsigned int var_20 = 886860102U;
int var_21 = -2039291996;
unsigned long long int var_22 = 10733609446937109935ULL;
unsigned char var_23 = (unsigned char)215;
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
