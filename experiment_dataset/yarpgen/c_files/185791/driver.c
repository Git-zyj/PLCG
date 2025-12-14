#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4008587295922798419ULL;
signed char var_6 = (signed char)(-127 - 1);
unsigned long long int var_8 = 9814955161080980540ULL;
int var_10 = -1642440065;
signed char var_11 = (signed char)15;
unsigned short var_12 = (unsigned short)40869;
int zero = 0;
signed char var_15 = (signed char)-64;
unsigned int var_16 = 951419521U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
