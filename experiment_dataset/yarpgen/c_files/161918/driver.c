#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61364;
unsigned short var_3 = (unsigned short)22690;
unsigned short var_5 = (unsigned short)13755;
unsigned short var_6 = (unsigned short)47245;
unsigned short var_7 = (unsigned short)35646;
int var_8 = 257688271;
unsigned short var_11 = (unsigned short)60767;
int var_12 = -106981388;
int zero = 0;
unsigned short var_15 = (unsigned short)55430;
unsigned short var_16 = (unsigned short)1177;
unsigned short var_17 = (unsigned short)48347;
int var_18 = 158859773;
int var_19 = -1283103929;
unsigned short var_20 = (unsigned short)54811;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
