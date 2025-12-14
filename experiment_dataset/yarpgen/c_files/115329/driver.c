#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -467059280;
unsigned long long int var_7 = 4479992679578893852ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)35522;
unsigned short var_15 = (unsigned short)61212;
int var_16 = -1200948237;
int var_17 = -1077805504;
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
