#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2940664169U;
unsigned int var_6 = 2644623266U;
unsigned int var_11 = 4095191502U;
unsigned int var_19 = 1570940900U;
int zero = 0;
unsigned int var_20 = 476159362U;
unsigned int var_21 = 3912866318U;
unsigned int var_22 = 4014605161U;
void init() {
}

void checksum() {
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
