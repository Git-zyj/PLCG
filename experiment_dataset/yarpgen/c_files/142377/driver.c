#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
int var_3 = 1259332811;
unsigned char var_4 = (unsigned char)101;
short var_10 = (short)-26896;
signed char var_11 = (signed char)67;
short var_14 = (short)-22089;
signed char var_15 = (signed char)-116;
int zero = 0;
unsigned int var_19 = 2608956500U;
unsigned int var_20 = 3903355211U;
int var_21 = -805960096;
void init() {
}

void checksum() {
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
