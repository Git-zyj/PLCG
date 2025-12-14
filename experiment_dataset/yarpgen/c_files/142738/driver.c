#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3626592468U;
unsigned int var_2 = 1402855030U;
unsigned int var_3 = 1739999086U;
int zero = 0;
unsigned short var_11 = (unsigned short)36050;
unsigned int var_12 = 4009108468U;
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
