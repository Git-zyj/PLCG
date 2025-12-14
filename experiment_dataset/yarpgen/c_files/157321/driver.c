#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 766737995U;
short var_5 = (short)27753;
unsigned long long int var_8 = 15497333066352160591ULL;
int zero = 0;
int var_10 = -591344547;
unsigned short var_11 = (unsigned short)2576;
unsigned short var_12 = (unsigned short)42338;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
