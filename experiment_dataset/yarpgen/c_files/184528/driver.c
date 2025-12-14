#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2438095990263139069LL;
unsigned int var_5 = 2442683748U;
short var_11 = (short)-27850;
int zero = 0;
unsigned int var_15 = 4098274962U;
unsigned int var_16 = 1959130687U;
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
