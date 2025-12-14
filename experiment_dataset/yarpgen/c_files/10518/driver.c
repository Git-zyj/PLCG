#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61271;
unsigned int var_7 = 177175026U;
signed char var_9 = (signed char)56;
unsigned short var_13 = (unsigned short)58801;
int zero = 0;
unsigned short var_14 = (unsigned short)6706;
signed char var_15 = (signed char)-33;
unsigned int var_16 = 2523853701U;
unsigned short var_17 = (unsigned short)1874;
unsigned char var_18 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
