#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1020943595U;
unsigned char var_2 = (unsigned char)58;
unsigned char var_3 = (unsigned char)178;
short var_11 = (short)20567;
unsigned char var_14 = (unsigned char)88;
short var_16 = (short)-21623;
short var_18 = (short)9604;
int zero = 0;
unsigned char var_20 = (unsigned char)117;
unsigned char var_21 = (unsigned char)239;
unsigned char var_22 = (unsigned char)80;
unsigned int var_23 = 4219225616U;
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
