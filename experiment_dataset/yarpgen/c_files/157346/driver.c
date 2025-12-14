#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7447031164621320504LL;
unsigned short var_6 = (unsigned short)42433;
unsigned long long int var_12 = 3597543778936311018ULL;
unsigned char var_14 = (unsigned char)147;
int zero = 0;
unsigned short var_17 = (unsigned short)37436;
int var_18 = 1149749129;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
