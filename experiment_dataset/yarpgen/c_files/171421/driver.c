#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 326352212;
short var_8 = (short)-9434;
unsigned short var_10 = (unsigned short)1440;
int zero = 0;
unsigned short var_13 = (unsigned short)36264;
signed char var_14 = (signed char)84;
unsigned char var_15 = (unsigned char)51;
unsigned int var_16 = 3242056865U;
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
