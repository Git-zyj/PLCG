#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)2766;
signed char var_7 = (signed char)32;
short var_12 = (short)-8794;
unsigned long long int var_15 = 18100464109747128157ULL;
unsigned short var_17 = (unsigned short)55382;
int zero = 0;
unsigned short var_18 = (unsigned short)13400;
unsigned long long int var_19 = 3617997602311909865ULL;
unsigned int var_20 = 1717746938U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
