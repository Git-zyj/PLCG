#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)65240;
unsigned int var_5 = 1671057162U;
unsigned long long int var_8 = 14443387434114924954ULL;
int zero = 0;
unsigned int var_10 = 3027233064U;
unsigned char var_11 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
