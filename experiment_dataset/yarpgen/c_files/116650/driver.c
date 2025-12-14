#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1385107573U;
unsigned short var_2 = (unsigned short)61254;
int var_13 = -520947548;
signed char var_15 = (signed char)-4;
int zero = 0;
long long int var_16 = -8338722106457541166LL;
short var_17 = (short)-601;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
