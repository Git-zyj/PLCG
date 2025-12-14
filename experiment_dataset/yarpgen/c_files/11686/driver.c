#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -276825769;
int var_4 = 1721590380;
int var_5 = 1424842969;
int var_7 = 2057960021;
int zero = 0;
unsigned long long int var_18 = 14270754321728579514ULL;
unsigned int var_19 = 2866454302U;
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
