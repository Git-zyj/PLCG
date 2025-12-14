#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2059902165;
signed char var_10 = (signed char)107;
signed char var_11 = (signed char)19;
long long int var_12 = 306493222663832306LL;
int var_13 = -2107325009;
int zero = 0;
signed char var_14 = (signed char)23;
unsigned char var_15 = (unsigned char)90;
unsigned long long int var_16 = 16857986255481033164ULL;
void init() {
}

void checksum() {
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
