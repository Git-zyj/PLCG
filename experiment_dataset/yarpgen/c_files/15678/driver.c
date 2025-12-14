#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
short var_1 = (short)3898;
unsigned long long int var_5 = 8387152647670998837ULL;
short var_8 = (short)6462;
int zero = 0;
short var_20 = (short)-28919;
unsigned int var_21 = 1817604421U;
short var_22 = (short)-24857;
unsigned int var_23 = 3754822538U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
