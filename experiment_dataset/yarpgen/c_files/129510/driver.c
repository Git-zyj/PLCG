#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)-31171;
unsigned short var_13 = (unsigned short)47797;
int var_14 = -1947689587;
int zero = 0;
unsigned long long int var_18 = 6902305563952833231ULL;
unsigned int var_19 = 2752611262U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
