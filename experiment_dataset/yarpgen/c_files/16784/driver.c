#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14600924686746575393ULL;
long long int var_5 = -5109779836994129152LL;
unsigned int var_12 = 3799594832U;
int var_13 = -1882197627;
unsigned short var_15 = (unsigned short)11673;
int var_16 = -40964522;
int zero = 0;
int var_20 = 1128365471;
short var_21 = (short)-24123;
unsigned int var_22 = 2063943587U;
void init() {
}

void checksum() {
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
