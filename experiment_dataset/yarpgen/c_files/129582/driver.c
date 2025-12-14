#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56762;
unsigned short var_3 = (unsigned short)40256;
unsigned short var_5 = (unsigned short)43070;
int zero = 0;
unsigned long long int var_20 = 12243515276834306899ULL;
int var_21 = 143779339;
int var_22 = 1580592643;
int var_23 = 1748318881;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
