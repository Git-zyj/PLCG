#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 12455937698716712610ULL;
int var_5 = 1293387343;
unsigned char var_6 = (unsigned char)47;
int zero = 0;
short var_10 = (short)-30084;
short var_11 = (short)30573;
unsigned char var_12 = (unsigned char)64;
unsigned short var_13 = (unsigned short)57552;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
