#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46378;
unsigned char var_12 = (unsigned char)104;
signed char var_13 = (signed char)(-127 - 1);
int zero = 0;
unsigned short var_15 = (unsigned short)43851;
unsigned int var_16 = 570434878U;
short var_17 = (short)-25269;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
