#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12998237080176786012ULL;
unsigned int var_2 = 1993621737U;
unsigned int var_9 = 4125769844U;
int var_10 = 568582429;
int zero = 0;
short var_15 = (short)19167;
short var_16 = (short)29173;
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
