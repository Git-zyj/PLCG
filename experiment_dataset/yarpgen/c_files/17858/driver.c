#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17002504382371441532ULL;
unsigned int var_17 = 1069603198U;
int zero = 0;
short var_19 = (short)1466;
unsigned short var_20 = (unsigned short)12847;
unsigned long long int var_21 = 11473929898463810522ULL;
unsigned short var_22 = (unsigned short)23711;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
