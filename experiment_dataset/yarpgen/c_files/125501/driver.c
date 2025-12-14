#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 112369998U;
int var_5 = 2007854315;
unsigned short var_7 = (unsigned short)1765;
int zero = 0;
unsigned long long int var_11 = 18416528101007620551ULL;
unsigned short var_12 = (unsigned short)37993;
short var_13 = (short)-24545;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
