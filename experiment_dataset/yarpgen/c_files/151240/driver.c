#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30229;
unsigned short var_4 = (unsigned short)63956;
int var_6 = 1799676948;
int var_9 = -1382485489;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 3201448248U;
int zero = 0;
short var_16 = (short)27178;
unsigned int var_17 = 3481995645U;
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
