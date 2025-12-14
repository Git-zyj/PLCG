#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1951492344;
unsigned short var_6 = (unsigned short)43609;
short var_11 = (short)17962;
short var_12 = (short)-925;
int var_14 = 174262610;
unsigned short var_15 = (unsigned short)20733;
short var_16 = (short)-30751;
int zero = 0;
short var_18 = (short)4110;
unsigned short var_19 = (unsigned short)41756;
void init() {
}

void checksum() {
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
