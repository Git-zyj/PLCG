#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -405520185723124990LL;
short var_6 = (short)8811;
unsigned short var_12 = (unsigned short)29996;
signed char var_15 = (signed char)23;
signed char var_18 = (signed char)17;
int zero = 0;
unsigned char var_20 = (unsigned char)40;
unsigned char var_21 = (unsigned char)205;
int var_22 = -780218604;
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
