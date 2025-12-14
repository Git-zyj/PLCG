#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64503;
unsigned short var_3 = (unsigned short)2079;
unsigned short var_6 = (unsigned short)48016;
unsigned int var_7 = 696006823U;
unsigned int var_8 = 2615110475U;
unsigned int var_9 = 145534540U;
int zero = 0;
unsigned int var_10 = 1869650472U;
unsigned short var_11 = (unsigned short)43979;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
