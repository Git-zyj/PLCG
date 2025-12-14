#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4243493115718368760LL;
unsigned int var_2 = 931603155U;
long long int var_9 = 6673344226709122690LL;
int var_15 = 1386297623;
unsigned int var_16 = 1337051802U;
unsigned short var_18 = (unsigned short)31551;
int zero = 0;
unsigned int var_20 = 3053116215U;
signed char var_21 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
