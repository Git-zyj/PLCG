#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 611608787U;
unsigned short var_2 = (unsigned short)55418;
unsigned long long int var_3 = 1206785007591905237ULL;
short var_4 = (short)-29713;
long long int var_5 = 5849878815264941279LL;
int var_6 = -1918851959;
int var_7 = -727928025;
signed char var_8 = (signed char)67;
long long int var_10 = -7235842748022392312LL;
int zero = 0;
short var_11 = (short)-16392;
unsigned short var_12 = (unsigned short)7340;
unsigned short var_13 = (unsigned short)909;
unsigned short var_14 = (unsigned short)7171;
signed char var_15 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
