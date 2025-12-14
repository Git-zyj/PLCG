#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1793292358;
unsigned int var_7 = 1214274681U;
int zero = 0;
int var_15 = 1853108429;
unsigned long long int var_16 = 10985435998340827332ULL;
short var_17 = (short)17680;
unsigned char var_18 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
