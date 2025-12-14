#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11548;
unsigned long long int var_4 = 2897084877566300606ULL;
unsigned int var_6 = 2518953032U;
int var_7 = 53073437;
unsigned int var_8 = 1238876082U;
unsigned long long int var_10 = 18251544178591615482ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)104;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
