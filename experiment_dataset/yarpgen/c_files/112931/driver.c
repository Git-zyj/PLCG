#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3307874126U;
unsigned int var_5 = 1237354971U;
signed char var_11 = (signed char)41;
signed char var_12 = (signed char)100;
int zero = 0;
unsigned int var_16 = 3026509522U;
unsigned int var_17 = 1643358398U;
unsigned short var_18 = (unsigned short)15474;
signed char var_19 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
