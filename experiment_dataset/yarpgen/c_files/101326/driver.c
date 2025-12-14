#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2551813463U;
unsigned long long int var_3 = 6155877155849962188ULL;
long long int var_6 = -1034722014836269546LL;
int var_9 = -1994162818;
int var_10 = 2028452763;
unsigned int var_14 = 2816189014U;
unsigned int var_15 = 2987739433U;
unsigned int var_16 = 2024545520U;
int zero = 0;
unsigned int var_17 = 2608968891U;
int var_18 = 1199026680;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
