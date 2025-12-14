#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12546;
int var_4 = -1752105727;
signed char var_5 = (signed char)73;
int zero = 0;
int var_12 = -2135440327;
short var_13 = (short)-27841;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
