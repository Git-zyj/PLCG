#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 68423541;
unsigned long long int var_7 = 16597954848339099391ULL;
unsigned short var_10 = (unsigned short)55510;
int zero = 0;
unsigned short var_11 = (unsigned short)30593;
int var_12 = 1011480612;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
