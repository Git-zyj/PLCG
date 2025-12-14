#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7210415846440029838ULL;
long long int var_1 = -9211891433446036924LL;
long long int var_2 = -4111349412591659381LL;
unsigned int var_3 = 3681244683U;
unsigned long long int var_7 = 12911478882471157792ULL;
unsigned int var_12 = 1520029449U;
long long int var_14 = 6807242169973952369LL;
int zero = 0;
unsigned long long int var_16 = 2694898896059990280ULL;
signed char var_17 = (signed char)-5;
void init() {
}

void checksum() {
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
