#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1458637191;
unsigned long long int var_8 = 2551493360798195216ULL;
unsigned char var_15 = (unsigned char)128;
int zero = 0;
int var_19 = -1335402533;
unsigned int var_20 = 4022005927U;
int var_21 = 1533868077;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
