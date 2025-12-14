#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
unsigned int var_8 = 1562622198U;
short var_10 = (short)28465;
signed char var_12 = (signed char)4;
unsigned int var_13 = 3682294608U;
int zero = 0;
short var_19 = (short)-12561;
short var_20 = (short)-22818;
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
