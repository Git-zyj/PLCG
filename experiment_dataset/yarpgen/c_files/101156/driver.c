#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1280270943U;
short var_2 = (short)-21266;
signed char var_6 = (signed char)81;
signed char var_7 = (signed char)125;
long long int var_10 = -2053070769715121625LL;
int zero = 0;
int var_13 = 1280327185;
int var_14 = -1865632396;
short var_15 = (short)-21785;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
