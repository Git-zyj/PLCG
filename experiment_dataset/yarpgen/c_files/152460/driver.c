#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3561298564U;
unsigned char var_6 = (unsigned char)23;
unsigned char var_8 = (unsigned char)126;
unsigned char var_9 = (unsigned char)4;
unsigned char var_10 = (unsigned char)109;
unsigned char var_13 = (unsigned char)190;
int zero = 0;
unsigned int var_14 = 2928852443U;
short var_15 = (short)-2471;
unsigned char var_16 = (unsigned char)54;
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
