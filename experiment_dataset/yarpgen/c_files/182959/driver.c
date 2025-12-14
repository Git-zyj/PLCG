#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49265;
long long int var_4 = -7466300349006195487LL;
unsigned int var_5 = 2388886527U;
unsigned char var_7 = (unsigned char)128;
unsigned short var_11 = (unsigned short)49128;
unsigned char var_12 = (unsigned char)144;
unsigned short var_14 = (unsigned short)3776;
int zero = 0;
int var_15 = -20653752;
long long int var_16 = 7106227298727018944LL;
unsigned char var_17 = (unsigned char)36;
int var_18 = 132148275;
short var_19 = (short)10277;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
