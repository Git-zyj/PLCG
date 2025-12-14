#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
unsigned short var_1 = (unsigned short)27840;
unsigned int var_6 = 2608549134U;
unsigned int var_7 = 1233101570U;
int var_8 = 126367194;
int zero = 0;
short var_11 = (short)2759;
unsigned int var_12 = 3446835476U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
