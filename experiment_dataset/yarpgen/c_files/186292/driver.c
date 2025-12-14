#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21167;
unsigned int var_3 = 55036450U;
signed char var_5 = (signed char)-60;
signed char var_6 = (signed char)10;
short var_7 = (short)8602;
signed char var_12 = (signed char)25;
int zero = 0;
unsigned int var_13 = 2005723076U;
signed char var_14 = (signed char)54;
unsigned int var_15 = 13363851U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
