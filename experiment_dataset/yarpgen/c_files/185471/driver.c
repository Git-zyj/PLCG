#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1727199263;
unsigned int var_3 = 2315940782U;
unsigned long long int var_4 = 2188949229788197574ULL;
unsigned int var_5 = 4120070385U;
signed char var_8 = (signed char)10;
unsigned int var_10 = 2935665706U;
short var_11 = (short)24353;
long long int var_12 = 134317063082833082LL;
int zero = 0;
unsigned char var_15 = (unsigned char)88;
int var_16 = -1879969659;
int var_17 = 189885991;
void init() {
}

void checksum() {
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
