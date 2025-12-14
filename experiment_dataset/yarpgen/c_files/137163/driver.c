#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1854594068U;
unsigned int var_2 = 1322476994U;
unsigned char var_9 = (unsigned char)95;
int zero = 0;
short var_11 = (short)18069;
unsigned short var_12 = (unsigned short)21091;
short var_13 = (short)1255;
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
