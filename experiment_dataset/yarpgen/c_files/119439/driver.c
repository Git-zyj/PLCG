#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21305;
unsigned int var_2 = 3367782681U;
unsigned char var_5 = (unsigned char)163;
unsigned int var_11 = 1318388120U;
int zero = 0;
long long int var_13 = -20949373294303885LL;
int var_14 = 1976444525;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
