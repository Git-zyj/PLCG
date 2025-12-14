#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2428315744U;
unsigned int var_3 = 1657181368U;
short var_5 = (short)5850;
unsigned int var_7 = 2693728802U;
int zero = 0;
unsigned long long int var_10 = 1965869610597277173ULL;
unsigned int var_11 = 1232309554U;
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
