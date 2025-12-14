#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3625008518U;
unsigned short var_8 = (unsigned short)24236;
int var_10 = 1767426936;
int var_12 = -2145712590;
signed char var_14 = (signed char)12;
int zero = 0;
unsigned int var_18 = 3297278496U;
unsigned short var_19 = (unsigned short)44277;
signed char var_20 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
