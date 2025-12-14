#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6346878837655948130ULL;
signed char var_7 = (signed char)8;
long long int var_8 = -9160287375423611920LL;
unsigned int var_10 = 2823753536U;
unsigned long long int var_13 = 18423674891925468793ULL;
unsigned char var_15 = (unsigned char)253;
int zero = 0;
unsigned int var_16 = 4244390288U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)16413;
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
