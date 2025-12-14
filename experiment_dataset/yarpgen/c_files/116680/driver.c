#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
unsigned int var_2 = 3466126613U;
short var_5 = (short)21024;
short var_8 = (short)8250;
unsigned char var_9 = (unsigned char)155;
int var_11 = -1651561203;
int zero = 0;
short var_14 = (short)-31292;
short var_15 = (short)10495;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
