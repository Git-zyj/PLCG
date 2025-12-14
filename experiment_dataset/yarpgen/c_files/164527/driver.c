#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12251;
int var_3 = -1199738473;
unsigned int var_5 = 3801712364U;
short var_8 = (short)-28032;
unsigned short var_9 = (unsigned short)6688;
int zero = 0;
unsigned char var_11 = (unsigned char)90;
unsigned short var_12 = (unsigned short)21959;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
