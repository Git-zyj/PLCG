#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2388592207U;
short var_2 = (short)-14053;
_Bool var_15 = (_Bool)0;
int var_16 = 1009760538;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)25608;
unsigned int var_21 = 2828510026U;
unsigned int var_22 = 1882758829U;
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
