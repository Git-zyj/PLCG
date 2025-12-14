#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)44370;
unsigned long long int var_10 = 5168168686272497531ULL;
short var_11 = (short)-23219;
unsigned int var_13 = 2706409463U;
unsigned char var_15 = (unsigned char)203;
int zero = 0;
unsigned short var_17 = (unsigned short)49634;
short var_18 = (short)-31100;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
