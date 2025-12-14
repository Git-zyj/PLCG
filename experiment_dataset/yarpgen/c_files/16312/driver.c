#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1367718588;
unsigned short var_7 = (unsigned short)38175;
short var_11 = (short)-30092;
short var_15 = (short)-23880;
int zero = 0;
unsigned int var_16 = 2509953249U;
int var_17 = -193058190;
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
