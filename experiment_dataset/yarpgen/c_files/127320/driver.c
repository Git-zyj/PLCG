#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2218537895402154577ULL;
unsigned int var_7 = 3775822049U;
int zero = 0;
unsigned int var_10 = 3417851056U;
unsigned short var_11 = (unsigned short)50712;
unsigned long long int var_12 = 7761560166832198714ULL;
unsigned int var_13 = 1255743018U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
