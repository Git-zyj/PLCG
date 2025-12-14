#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
signed char var_3 = (signed char)16;
unsigned long long int var_4 = 16143362689112164493ULL;
long long int var_8 = 8016418009495314949LL;
unsigned short var_9 = (unsigned short)44689;
signed char var_10 = (signed char)17;
int zero = 0;
short var_16 = (short)2568;
int var_17 = 2000575611;
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
