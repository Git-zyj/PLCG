#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
unsigned short var_3 = (unsigned short)6485;
unsigned char var_10 = (unsigned char)149;
int zero = 0;
unsigned short var_11 = (unsigned short)55596;
unsigned char var_12 = (unsigned char)167;
unsigned short var_13 = (unsigned short)56731;
void init() {
}

void checksum() {
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
