#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2603931796U;
int zero = 0;
unsigned long long int var_16 = 15058655769042559335ULL;
short var_17 = (short)-32029;
unsigned int var_18 = 583553250U;
unsigned short var_19 = (unsigned short)44727;
unsigned int var_20 = 1671673453U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
