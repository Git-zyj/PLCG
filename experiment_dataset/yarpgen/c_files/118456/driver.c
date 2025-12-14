#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -557641132;
unsigned int var_8 = 2790907277U;
unsigned long long int var_10 = 7781349867807007940ULL;
int zero = 0;
unsigned long long int var_17 = 8316312712261722024ULL;
unsigned char var_18 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
