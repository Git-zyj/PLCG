#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2627995784U;
short var_5 = (short)-29824;
int var_7 = -709691779;
int zero = 0;
unsigned char var_14 = (unsigned char)86;
unsigned char var_15 = (unsigned char)79;
short var_16 = (short)-29090;
unsigned short var_17 = (unsigned short)20651;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
