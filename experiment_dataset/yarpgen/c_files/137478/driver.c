#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54183;
short var_3 = (short)-16267;
unsigned short var_5 = (unsigned short)25489;
unsigned short var_8 = (unsigned short)37018;
short var_10 = (short)17639;
int zero = 0;
unsigned short var_13 = (unsigned short)47809;
unsigned short var_14 = (unsigned short)8678;
unsigned short var_15 = (unsigned short)44596;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
