#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 20997292U;
signed char var_3 = (signed char)88;
int var_4 = -1020937575;
unsigned long long int var_5 = 17788278788886821624ULL;
int var_8 = 557164832;
unsigned long long int var_10 = 16144135974376284724ULL;
int zero = 0;
unsigned int var_11 = 2481435181U;
int var_12 = 1072025975;
unsigned int var_13 = 3565726128U;
long long int var_14 = -5787798609109905381LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
