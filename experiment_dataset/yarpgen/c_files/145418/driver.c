#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -242993218;
unsigned long long int var_12 = 7186475096055941148ULL;
unsigned char var_15 = (unsigned char)160;
unsigned int var_16 = 1575592780U;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -698440777;
unsigned char var_22 = (unsigned char)65;
unsigned int var_23 = 3708219827U;
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
