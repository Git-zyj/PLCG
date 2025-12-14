#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14008;
unsigned long long int var_2 = 2855647404492430284ULL;
short var_3 = (short)-9965;
unsigned short var_7 = (unsigned short)63737;
signed char var_8 = (signed char)33;
int zero = 0;
short var_15 = (short)-10498;
short var_16 = (short)-24637;
void init() {
}

void checksum() {
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
