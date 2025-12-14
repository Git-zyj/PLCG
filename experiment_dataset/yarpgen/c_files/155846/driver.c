#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-13639;
long long int var_14 = 3892320192555408222LL;
long long int var_16 = 2300671184769096350LL;
int zero = 0;
signed char var_20 = (signed char)58;
int var_21 = 1805809113;
unsigned short var_22 = (unsigned short)48046;
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
