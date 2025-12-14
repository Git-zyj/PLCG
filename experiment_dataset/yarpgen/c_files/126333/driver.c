#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3426146295392139737LL;
short var_4 = (short)17479;
long long int var_8 = 7444730603580141912LL;
short var_12 = (short)-1094;
int zero = 0;
unsigned long long int var_14 = 12517903818998186253ULL;
unsigned char var_15 = (unsigned char)99;
unsigned long long int var_16 = 2561182912020834173ULL;
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
