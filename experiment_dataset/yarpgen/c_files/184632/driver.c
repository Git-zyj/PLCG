#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1002302353U;
unsigned char var_7 = (unsigned char)176;
unsigned short var_14 = (unsigned short)21171;
unsigned short var_16 = (unsigned short)28363;
unsigned short var_18 = (unsigned short)22793;
int zero = 0;
unsigned short var_20 = (unsigned short)53764;
short var_21 = (short)-6277;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
