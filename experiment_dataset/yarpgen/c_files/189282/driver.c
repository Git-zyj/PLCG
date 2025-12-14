#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4192551163U;
unsigned int var_2 = 1056929980U;
unsigned int var_3 = 4216910173U;
int var_5 = 915841966;
int zero = 0;
unsigned int var_10 = 2012469899U;
unsigned long long int var_11 = 13438166117788203740ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
