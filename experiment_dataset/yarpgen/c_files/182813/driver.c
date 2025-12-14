#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 1559909021U;
unsigned int var_5 = 3855990486U;
int var_6 = 259851132;
short var_10 = (short)870;
int zero = 0;
unsigned char var_12 = (unsigned char)118;
unsigned short var_13 = (unsigned short)28174;
unsigned int var_14 = 3958721268U;
unsigned short var_15 = (unsigned short)23950;
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
