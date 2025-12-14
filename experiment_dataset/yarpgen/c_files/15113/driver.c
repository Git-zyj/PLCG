#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24640;
unsigned int var_1 = 2804841410U;
unsigned short var_5 = (unsigned short)65380;
unsigned long long int var_7 = 9278603912636169645ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)169;
unsigned char var_16 = (unsigned char)189;
unsigned int var_17 = 853406318U;
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
