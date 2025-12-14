#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7438915897412525889LL;
unsigned long long int var_3 = 10459159905915735112ULL;
unsigned int var_13 = 1425916577U;
int zero = 0;
unsigned long long int var_20 = 9374441255122911443ULL;
unsigned int var_21 = 1184530106U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
