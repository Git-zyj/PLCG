#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 780313102;
short var_1 = (short)2813;
short var_5 = (short)16387;
signed char var_6 = (signed char)103;
int var_8 = -1364988094;
int zero = 0;
int var_11 = 1203615140;
signed char var_12 = (signed char)-14;
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
