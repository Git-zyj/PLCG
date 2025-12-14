#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)21;
unsigned char var_6 = (unsigned char)19;
unsigned long long int var_12 = 9446490093385822444ULL;
unsigned char var_14 = (unsigned char)95;
int zero = 0;
long long int var_16 = -3323499436614487371LL;
unsigned char var_17 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
