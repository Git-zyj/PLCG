#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)18008;
unsigned int var_10 = 3186678625U;
unsigned long long int var_13 = 3603879572718973453ULL;
unsigned int var_17 = 2559376313U;
int zero = 0;
short var_18 = (short)4535;
signed char var_19 = (signed char)-34;
unsigned short var_20 = (unsigned short)55876;
void init() {
}

void checksum() {
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
