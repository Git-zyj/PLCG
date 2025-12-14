#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59206;
unsigned char var_2 = (unsigned char)174;
int var_5 = 1578924311;
long long int var_6 = 1855788333868607691LL;
int zero = 0;
short var_14 = (short)7783;
unsigned char var_15 = (unsigned char)178;
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
