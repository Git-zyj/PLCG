#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29432;
signed char var_2 = (signed char)88;
unsigned int var_3 = 2113792998U;
signed char var_6 = (signed char)100;
short var_7 = (short)-5134;
unsigned char var_10 = (unsigned char)230;
int zero = 0;
unsigned long long int var_14 = 5727604405112120273ULL;
unsigned int var_15 = 3767857596U;
int var_16 = -1337673535;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
