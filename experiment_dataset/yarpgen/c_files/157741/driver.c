#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -354130844;
int var_5 = -1724698549;
unsigned char var_6 = (unsigned char)36;
int var_11 = -527996732;
int var_12 = -1062503286;
signed char var_13 = (signed char)44;
int zero = 0;
short var_15 = (short)-28837;
int var_16 = 895613428;
unsigned char var_17 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
