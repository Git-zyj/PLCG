#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12421;
signed char var_8 = (signed char)96;
unsigned long long int var_12 = 1564841471840426206ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)194;
unsigned short var_14 = (unsigned short)58864;
signed char var_15 = (signed char)-3;
signed char var_16 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
