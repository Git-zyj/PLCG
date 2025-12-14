#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned char var_10 = (unsigned char)122;
unsigned long long int var_12 = 10770769776429693694ULL;
unsigned int var_13 = 1686058232U;
int zero = 0;
unsigned int var_15 = 1916796031U;
long long int var_16 = -6000106186210474520LL;
unsigned long long int var_17 = 1439497118166973521ULL;
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
