#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
short var_4 = (short)21329;
signed char var_7 = (signed char)0;
unsigned int var_13 = 2638445465U;
unsigned int var_16 = 2376322892U;
int zero = 0;
unsigned int var_20 = 2515316053U;
unsigned char var_21 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
