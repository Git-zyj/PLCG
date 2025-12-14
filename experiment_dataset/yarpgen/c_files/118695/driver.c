#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1897548298;
unsigned long long int var_3 = 17553460616866609796ULL;
short var_5 = (short)938;
int zero = 0;
unsigned int var_15 = 1733872253U;
unsigned char var_16 = (unsigned char)255;
void init() {
}

void checksum() {
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
