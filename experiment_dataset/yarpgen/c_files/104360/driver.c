#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3459972589408315671ULL;
short var_7 = (short)-17957;
int zero = 0;
short var_12 = (short)10857;
unsigned short var_13 = (unsigned short)4677;
int var_14 = -1735854076;
unsigned int var_15 = 1578436459U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
