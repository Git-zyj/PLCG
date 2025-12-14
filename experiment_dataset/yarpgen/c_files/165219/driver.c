#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9177811582055433220LL;
short var_3 = (short)-13545;
long long int var_13 = -3316419397677333805LL;
short var_14 = (short)-20907;
int zero = 0;
int var_20 = 1070175861;
unsigned int var_21 = 1831012204U;
signed char var_22 = (signed char)-43;
unsigned int var_23 = 3769750846U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
