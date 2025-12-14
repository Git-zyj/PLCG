#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -30308884;
unsigned int var_5 = 4173042620U;
unsigned long long int var_12 = 9673853876357943990ULL;
int zero = 0;
short var_16 = (short)8668;
unsigned char var_17 = (unsigned char)117;
void init() {
}

void checksum() {
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
