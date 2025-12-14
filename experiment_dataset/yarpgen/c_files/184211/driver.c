#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11190;
short var_4 = (short)-9857;
unsigned short var_6 = (unsigned short)1777;
unsigned char var_9 = (unsigned char)4;
short var_14 = (short)17538;
int zero = 0;
int var_16 = 1949500274;
unsigned char var_17 = (unsigned char)76;
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
