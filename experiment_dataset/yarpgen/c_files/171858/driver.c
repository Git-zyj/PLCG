#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1636247841U;
unsigned long long int var_6 = 7246773171878016516ULL;
int var_10 = -435498091;
int zero = 0;
unsigned long long int var_15 = 10750160733988094116ULL;
int var_16 = 907492334;
void init() {
}

void checksum() {
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
