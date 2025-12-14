#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2129837620;
unsigned int var_8 = 64110789U;
unsigned char var_11 = (unsigned char)224;
int zero = 0;
unsigned int var_12 = 2709699760U;
unsigned char var_13 = (unsigned char)76;
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
