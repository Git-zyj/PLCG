#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13326230144124805270ULL;
short var_4 = (short)6866;
unsigned int var_7 = 3966268400U;
int var_10 = 611345599;
int var_11 = 937332326;
int zero = 0;
unsigned char var_14 = (unsigned char)86;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)55;
unsigned char var_17 = (unsigned char)180;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
