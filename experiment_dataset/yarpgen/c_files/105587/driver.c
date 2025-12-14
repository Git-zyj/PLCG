#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)973;
unsigned char var_2 = (unsigned char)110;
unsigned int var_8 = 1761790268U;
int zero = 0;
unsigned short var_14 = (unsigned short)51036;
long long int var_15 = -58159693359192798LL;
int var_16 = -697583859;
int var_17 = 1895221930;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
