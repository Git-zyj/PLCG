#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1814478168;
short var_2 = (short)10214;
unsigned short var_3 = (unsigned short)35968;
unsigned char var_13 = (unsigned char)173;
short var_15 = (short)3472;
int zero = 0;
unsigned short var_16 = (unsigned short)42202;
long long int var_17 = -5637283312351032967LL;
unsigned char var_18 = (unsigned char)245;
int var_19 = 259162211;
long long int var_20 = -7941744301733864448LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
