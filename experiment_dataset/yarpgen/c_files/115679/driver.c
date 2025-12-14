#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2037010891;
long long int var_4 = -2372194188492861993LL;
unsigned char var_7 = (unsigned char)226;
long long int var_8 = -2738000408075226905LL;
int zero = 0;
unsigned long long int var_10 = 10947943248358273655ULL;
signed char var_11 = (signed char)75;
unsigned long long int var_12 = 17916258652534878342ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
