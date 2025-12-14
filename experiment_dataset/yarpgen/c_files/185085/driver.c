#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28461;
unsigned short var_2 = (unsigned short)46489;
unsigned int var_5 = 587068193U;
int var_6 = 1969546694;
int zero = 0;
int var_10 = 1345524711;
int var_11 = -1906465811;
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
