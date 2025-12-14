#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42925;
int var_2 = 470787597;
short var_4 = (short)7399;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-12;
unsigned short var_7 = (unsigned short)33244;
unsigned int var_9 = 4030960586U;
long long int var_10 = -9051506239335175444LL;
int zero = 0;
unsigned int var_12 = 3562015384U;
short var_13 = (short)-23445;
short var_14 = (short)28887;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
