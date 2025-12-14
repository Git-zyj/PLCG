#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3185652282045839318ULL;
short var_1 = (short)14211;
unsigned int var_2 = 641684137U;
long long int var_3 = -7714453128795911453LL;
int zero = 0;
unsigned int var_15 = 3799800865U;
int var_16 = -161228103;
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
