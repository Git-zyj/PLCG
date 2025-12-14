#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12410;
_Bool var_2 = (_Bool)0;
long long int var_4 = -6954007872894376678LL;
short var_7 = (short)-31850;
unsigned short var_8 = (unsigned short)21442;
unsigned long long int var_9 = 7360534596991154102ULL;
unsigned long long int var_12 = 12021012212203595040ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)29643;
unsigned char var_14 = (unsigned char)174;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
