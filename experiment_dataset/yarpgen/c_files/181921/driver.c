#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1246345197U;
long long int var_4 = -5998507323841314543LL;
long long int var_10 = 6152090553021699500LL;
short var_12 = (short)-32109;
int zero = 0;
unsigned int var_15 = 1821002220U;
int var_16 = 176418898;
long long int var_17 = -5213149784083243743LL;
void init() {
}

void checksum() {
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
