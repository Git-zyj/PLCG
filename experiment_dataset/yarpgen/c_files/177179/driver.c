#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51767;
short var_2 = (short)-31095;
unsigned short var_8 = (unsigned short)57438;
unsigned short var_10 = (unsigned short)43673;
int zero = 0;
short var_11 = (short)5592;
signed char var_12 = (signed char)117;
int var_13 = -862377076;
short var_14 = (short)-30660;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
