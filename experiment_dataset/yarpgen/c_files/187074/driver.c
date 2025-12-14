#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18639;
unsigned long long int var_6 = 14970149450045808744ULL;
signed char var_8 = (signed char)-61;
int zero = 0;
int var_18 = -990411784;
unsigned short var_19 = (unsigned short)30470;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
