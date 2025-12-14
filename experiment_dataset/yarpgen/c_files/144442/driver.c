#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13316;
unsigned long long int var_1 = 2158869408545526841ULL;
short var_2 = (short)23625;
unsigned int var_11 = 712835351U;
short var_15 = (short)13901;
unsigned int var_16 = 1386926635U;
int zero = 0;
short var_19 = (short)23650;
unsigned int var_20 = 780564456U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
