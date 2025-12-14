#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)79;
int var_6 = 1541645759;
unsigned char var_11 = (unsigned char)10;
int zero = 0;
unsigned long long int var_14 = 12512478574989142308ULL;
unsigned long long int var_15 = 3076086870771652958ULL;
unsigned long long int var_16 = 4749176336525073481ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
