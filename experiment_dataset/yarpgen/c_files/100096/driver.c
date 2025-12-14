#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
long long int var_8 = 6754219836796075587LL;
unsigned int var_15 = 1121615661U;
int var_16 = 568737570;
int zero = 0;
unsigned short var_17 = (unsigned short)29298;
unsigned int var_18 = 3665044273U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
