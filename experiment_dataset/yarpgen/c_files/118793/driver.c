#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
short var_6 = (short)-23390;
short var_10 = (short)6969;
unsigned short var_11 = (unsigned short)58219;
long long int var_12 = -7786711772450955319LL;
unsigned int var_13 = 864519284U;
int zero = 0;
int var_14 = -93002417;
long long int var_15 = -6730381010258969042LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
