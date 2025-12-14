#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12034;
unsigned short var_2 = (unsigned short)63691;
int var_3 = 483088346;
unsigned long long int var_7 = 390055225227108538ULL;
int zero = 0;
short var_14 = (short)-16816;
short var_15 = (short)-25570;
unsigned int var_16 = 1196421409U;
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
