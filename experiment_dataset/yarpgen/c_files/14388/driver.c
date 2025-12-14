#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)2831;
unsigned int var_8 = 4084349704U;
unsigned short var_11 = (unsigned short)2128;
unsigned int var_14 = 2578350300U;
int zero = 0;
short var_20 = (short)5529;
long long int var_21 = -2493173657159713305LL;
int var_22 = 1694246380;
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
