#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-27;
unsigned char var_5 = (unsigned char)174;
unsigned int var_7 = 2270212807U;
unsigned long long int var_9 = 9540483427499840031ULL;
unsigned char var_12 = (unsigned char)20;
int zero = 0;
unsigned short var_16 = (unsigned short)32169;
unsigned char var_17 = (unsigned char)116;
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
