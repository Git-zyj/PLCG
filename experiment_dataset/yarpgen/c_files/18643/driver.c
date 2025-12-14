#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58452;
unsigned short var_4 = (unsigned short)56184;
unsigned short var_5 = (unsigned short)15858;
unsigned short var_7 = (unsigned short)18769;
unsigned short var_11 = (unsigned short)40716;
unsigned short var_12 = (unsigned short)35102;
int zero = 0;
unsigned short var_13 = (unsigned short)29972;
unsigned short var_14 = (unsigned short)30364;
unsigned short var_15 = (unsigned short)37729;
unsigned short var_16 = (unsigned short)24050;
unsigned short var_17 = (unsigned short)20165;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
