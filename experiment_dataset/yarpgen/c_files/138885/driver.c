#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)87;
unsigned int var_10 = 127612069U;
unsigned long long int var_12 = 557755427282087128ULL;
int zero = 0;
short var_14 = (short)466;
unsigned char var_15 = (unsigned char)231;
unsigned int var_16 = 2229992225U;
unsigned int var_17 = 3386837161U;
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
