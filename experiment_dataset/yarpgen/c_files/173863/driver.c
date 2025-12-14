#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10404;
unsigned char var_4 = (unsigned char)70;
unsigned char var_5 = (unsigned char)123;
unsigned int var_11 = 2679222624U;
int zero = 0;
short var_12 = (short)-19487;
unsigned char var_13 = (unsigned char)175;
long long int var_14 = 9054218037999100127LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
