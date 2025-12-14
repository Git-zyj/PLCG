#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3658926916U;
unsigned int var_11 = 1786834084U;
long long int var_12 = -5972667901593458057LL;
int zero = 0;
unsigned char var_15 = (unsigned char)8;
long long int var_16 = -8732949179266048841LL;
void init() {
}

void checksum() {
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
