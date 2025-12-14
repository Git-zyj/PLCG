#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 309418574U;
unsigned short var_4 = (unsigned short)5100;
unsigned int var_6 = 585633330U;
int zero = 0;
unsigned long long int var_15 = 18028318148716505851ULL;
long long int var_16 = -5459326215412119029LL;
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
