#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1741238770U;
unsigned int var_1 = 965128747U;
unsigned int var_2 = 3147557556U;
int var_5 = 1601637955;
long long int var_11 = 6014761914003978168LL;
unsigned int var_12 = 2954739329U;
int zero = 0;
unsigned int var_13 = 732593244U;
unsigned int var_14 = 2364196678U;
unsigned char var_15 = (unsigned char)198;
long long int var_16 = -6891209773221238089LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
