#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 33867444U;
unsigned short var_6 = (unsigned short)6383;
short var_7 = (short)-13345;
long long int var_11 = -6578243462694159097LL;
int zero = 0;
long long int var_17 = 6089170381754701418LL;
long long int var_18 = -8002445379811197723LL;
unsigned int var_19 = 367359339U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
