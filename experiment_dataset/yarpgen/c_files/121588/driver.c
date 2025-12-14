#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1822645764;
signed char var_1 = (signed char)11;
unsigned short var_3 = (unsigned short)55792;
unsigned short var_12 = (unsigned short)62386;
int zero = 0;
unsigned int var_13 = 1565090675U;
unsigned int var_14 = 3068866225U;
signed char var_15 = (signed char)71;
unsigned char var_16 = (unsigned char)241;
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
