#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)178;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)112;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)90;
unsigned int var_12 = 1257604404U;
unsigned char var_13 = (unsigned char)239;
unsigned long long int var_14 = 12443715113647671537ULL;
signed char var_15 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
