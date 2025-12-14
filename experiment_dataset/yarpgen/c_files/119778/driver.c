#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
unsigned short var_2 = (unsigned short)36319;
int var_3 = 219289099;
unsigned long long int var_4 = 13157787973049380885ULL;
unsigned short var_6 = (unsigned short)14367;
signed char var_7 = (signed char)-22;
int var_11 = 1401278778;
unsigned short var_12 = (unsigned short)46253;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 3745853271U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)30842;
unsigned int var_19 = 2028300233U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)61107;
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
