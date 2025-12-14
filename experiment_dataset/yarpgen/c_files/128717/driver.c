#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21453;
signed char var_4 = (signed char)-47;
unsigned short var_7 = (unsigned short)13819;
int zero = 0;
unsigned char var_14 = (unsigned char)115;
short var_15 = (short)11833;
unsigned long long int var_16 = 13262790956687229222ULL;
int var_17 = -2059132648;
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
