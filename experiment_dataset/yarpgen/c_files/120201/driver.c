#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3651105556U;
unsigned int var_5 = 4092184161U;
short var_10 = (short)14169;
short var_12 = (short)-13255;
int zero = 0;
int var_18 = -1992437356;
int var_19 = 390443726;
unsigned int var_20 = 577728376U;
unsigned int var_21 = 908715806U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
