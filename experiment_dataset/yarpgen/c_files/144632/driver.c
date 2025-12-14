#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1802964390U;
unsigned int var_9 = 2827388057U;
unsigned int var_14 = 3768899442U;
unsigned int var_18 = 3816989993U;
int zero = 0;
unsigned int var_20 = 4195878033U;
unsigned int var_21 = 3173569480U;
unsigned int var_22 = 1265329938U;
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
