#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2051754586;
unsigned long long int var_2 = 18163036588940033894ULL;
short var_3 = (short)8700;
unsigned short var_5 = (unsigned short)12178;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)22966;
unsigned short var_14 = (unsigned short)55919;
unsigned int var_15 = 2032706190U;
short var_16 = (short)-31103;
unsigned int var_17 = 23646000U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
