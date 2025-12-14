#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21151;
signed char var_3 = (signed char)-62;
unsigned int var_10 = 3011450462U;
signed char var_11 = (signed char)-63;
short var_15 = (short)-15461;
int zero = 0;
unsigned char var_16 = (unsigned char)231;
unsigned int var_17 = 2878402933U;
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
