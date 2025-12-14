#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61200;
short var_7 = (short)-32530;
unsigned long long int var_19 = 18099143236280267484ULL;
int zero = 0;
unsigned int var_20 = 1781672967U;
int var_21 = 2107035027;
unsigned char var_22 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
