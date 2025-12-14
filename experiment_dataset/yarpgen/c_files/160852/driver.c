#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49641;
unsigned char var_2 = (unsigned char)238;
unsigned int var_7 = 4144156754U;
unsigned short var_9 = (unsigned short)45428;
unsigned long long int var_12 = 14383733499554221526ULL;
int zero = 0;
unsigned int var_14 = 2470904964U;
unsigned long long int var_15 = 16314288576676691642ULL;
int var_16 = -1990170366;
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
