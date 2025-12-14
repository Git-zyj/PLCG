#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63842;
unsigned long long int var_1 = 2040058785434266910ULL;
int var_6 = 1189339835;
unsigned long long int var_7 = 8887559779474255236ULL;
unsigned short var_8 = (unsigned short)12139;
unsigned char var_9 = (unsigned char)187;
unsigned long long int var_11 = 2605597798924651241ULL;
unsigned short var_14 = (unsigned short)63023;
int zero = 0;
unsigned int var_16 = 677675023U;
unsigned long long int var_17 = 1434642566151906628ULL;
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
