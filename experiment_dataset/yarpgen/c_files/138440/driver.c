#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9922718111515310833ULL;
unsigned long long int var_11 = 8389455561359384157ULL;
int zero = 0;
unsigned long long int var_12 = 8178257840087652454ULL;
unsigned long long int var_13 = 16428518845708801623ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
