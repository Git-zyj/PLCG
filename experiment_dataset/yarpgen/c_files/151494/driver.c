#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3333650362U;
unsigned int var_4 = 167304376U;
unsigned long long int var_7 = 14379280541931987777ULL;
short var_9 = (short)13237;
int zero = 0;
unsigned int var_10 = 2453845157U;
int var_11 = -2133793613;
unsigned short var_12 = (unsigned short)34548;
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
