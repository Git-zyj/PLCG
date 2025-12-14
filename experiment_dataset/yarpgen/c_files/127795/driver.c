#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)23875;
long long int var_6 = -1485803927485534295LL;
_Bool var_10 = (_Bool)1;
unsigned char var_15 = (unsigned char)33;
int zero = 0;
unsigned char var_16 = (unsigned char)51;
unsigned long long int var_17 = 1503857350838994882ULL;
unsigned short var_18 = (unsigned short)51927;
unsigned short var_19 = (unsigned short)31252;
unsigned char var_20 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
