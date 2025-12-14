#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1720397013;
_Bool var_2 = (_Bool)0;
short var_5 = (short)12096;
unsigned short var_6 = (unsigned short)20741;
unsigned int var_11 = 2024948170U;
long long int var_12 = 3924896626849846382LL;
_Bool var_13 = (_Bool)0;
short var_15 = (short)-31498;
int zero = 0;
short var_17 = (short)-18123;
unsigned short var_18 = (unsigned short)41055;
unsigned char var_19 = (unsigned char)201;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-17131;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
