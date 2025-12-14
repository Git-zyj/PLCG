#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10675053165790915030ULL;
unsigned long long int var_5 = 2334623222784606009ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)56;
unsigned char var_16 = (unsigned char)178;
unsigned char var_17 = (unsigned char)66;
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
