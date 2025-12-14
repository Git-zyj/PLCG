#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-20136;
int var_5 = -618444175;
short var_6 = (short)-19435;
int zero = 0;
signed char var_12 = (signed char)0;
unsigned short var_13 = (unsigned short)35182;
unsigned short var_14 = (unsigned short)6179;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
