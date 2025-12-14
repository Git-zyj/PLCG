#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58643;
unsigned long long int var_11 = 7778752738198888957ULL;
unsigned char var_12 = (unsigned char)119;
int zero = 0;
unsigned int var_16 = 2877244203U;
short var_17 = (short)-525;
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
