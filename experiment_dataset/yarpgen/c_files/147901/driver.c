#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2015138092;
unsigned int var_5 = 2506570946U;
unsigned long long int var_6 = 4964473411833391512ULL;
int var_8 = -2140388832;
int zero = 0;
short var_10 = (short)19261;
unsigned int var_11 = 3310808098U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
