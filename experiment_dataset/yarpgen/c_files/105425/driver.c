#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)50893;
unsigned short var_14 = (unsigned short)33558;
unsigned short var_15 = (unsigned short)63211;
int zero = 0;
unsigned short var_20 = (unsigned short)33530;
unsigned short var_21 = (unsigned short)36004;
unsigned short var_22 = (unsigned short)44491;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
