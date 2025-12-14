#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
long long int var_2 = -1003073390776574266LL;
short var_3 = (short)-15437;
int var_7 = 1439727136;
unsigned long long int var_8 = 12723705161374026336ULL;
int zero = 0;
unsigned long long int var_11 = 7131446875270403982ULL;
unsigned short var_12 = (unsigned short)25435;
long long int var_13 = 1520966088537678156LL;
short var_14 = (short)-31396;
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
