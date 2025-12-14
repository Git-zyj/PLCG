#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)6;
unsigned long long int var_10 = 7556707418775950595ULL;
int var_13 = 1797446620;
int zero = 0;
unsigned long long int var_16 = 10634771620317516270ULL;
unsigned short var_17 = (unsigned short)39692;
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
