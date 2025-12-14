#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3112;
unsigned int var_5 = 2881009895U;
unsigned long long int var_6 = 16761969239891516654ULL;
long long int var_8 = 8366899384234760870LL;
unsigned short var_10 = (unsigned short)59614;
unsigned short var_11 = (unsigned short)64416;
unsigned int var_14 = 804078897U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)22;
int zero = 0;
unsigned char var_19 = (unsigned char)218;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)18932;
long long int var_22 = -401537131923235617LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
