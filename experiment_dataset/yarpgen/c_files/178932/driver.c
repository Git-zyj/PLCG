#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21370;
unsigned int var_9 = 3222095530U;
unsigned long long int var_10 = 455391948401097354ULL;
int zero = 0;
unsigned int var_14 = 2598589503U;
long long int var_15 = 1993070832031431909LL;
unsigned int var_16 = 3131053568U;
unsigned long long int var_17 = 6180918367663984686ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
