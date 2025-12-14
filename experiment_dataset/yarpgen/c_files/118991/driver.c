#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39620;
long long int var_2 = 4526392916764676068LL;
unsigned int var_3 = 3622033942U;
int var_6 = 820552100;
short var_8 = (short)-267;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2605450283U;
int var_15 = -2133876227;
unsigned short var_16 = (unsigned short)64412;
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
