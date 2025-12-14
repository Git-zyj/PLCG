#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2109620830;
unsigned int var_4 = 3304974775U;
unsigned short var_14 = (unsigned short)54165;
short var_15 = (short)-16619;
int zero = 0;
unsigned short var_17 = (unsigned short)12123;
unsigned char var_18 = (unsigned char)138;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
