#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)61;
short var_5 = (short)11812;
unsigned short var_6 = (unsigned short)60070;
int zero = 0;
unsigned char var_14 = (unsigned char)193;
short var_15 = (short)-13739;
unsigned short var_16 = (unsigned short)40563;
unsigned int var_17 = 2694761374U;
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
