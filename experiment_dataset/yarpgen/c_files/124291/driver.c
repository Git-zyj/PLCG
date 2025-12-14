#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5849831910783516168ULL;
unsigned long long int var_1 = 8089631898934758414ULL;
long long int var_5 = -6749034662253132725LL;
unsigned char var_11 = (unsigned char)191;
long long int var_12 = -6286926190021024910LL;
long long int var_13 = 4053858691770878292LL;
short var_14 = (short)-3781;
int zero = 0;
unsigned long long int var_15 = 4368472479237442932ULL;
unsigned int var_16 = 2173630411U;
short var_17 = (short)-13256;
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
