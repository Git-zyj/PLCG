#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30802;
unsigned short var_7 = (unsigned short)38860;
unsigned short var_8 = (unsigned short)40429;
unsigned short var_11 = (unsigned short)40961;
unsigned short var_15 = (unsigned short)57747;
int zero = 0;
unsigned short var_16 = (unsigned short)64352;
unsigned short var_17 = (unsigned short)65390;
unsigned short var_18 = (unsigned short)14599;
void init() {
}

void checksum() {
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
