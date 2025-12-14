#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5422;
unsigned long long int var_7 = 6645595491460919649ULL;
short var_12 = (short)-22198;
signed char var_13 = (signed char)-2;
int zero = 0;
unsigned short var_14 = (unsigned short)34372;
unsigned int var_15 = 1464246674U;
unsigned short var_16 = (unsigned short)2058;
void init() {
}

void checksum() {
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
