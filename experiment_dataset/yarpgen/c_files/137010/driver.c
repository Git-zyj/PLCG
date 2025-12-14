#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)50310;
unsigned long long int var_6 = 2580012510696905012ULL;
unsigned long long int var_9 = 3380649563237116965ULL;
unsigned long long int var_10 = 13185195516676994999ULL;
int zero = 0;
unsigned long long int var_13 = 9483700532076762807ULL;
int var_14 = -357657919;
unsigned short var_15 = (unsigned short)8804;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
