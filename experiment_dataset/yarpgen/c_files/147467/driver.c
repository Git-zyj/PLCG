#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1680072060U;
unsigned short var_1 = (unsigned short)33013;
unsigned long long int var_4 = 9239717406037417596ULL;
unsigned short var_5 = (unsigned short)64607;
unsigned short var_13 = (unsigned short)46597;
int zero = 0;
short var_14 = (short)897;
unsigned long long int var_15 = 13679654019463370622ULL;
unsigned char var_16 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
