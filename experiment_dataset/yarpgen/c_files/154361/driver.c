#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21005;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)117;
unsigned int var_6 = 3260215393U;
unsigned long long int var_7 = 14733522078368337437ULL;
long long int var_8 = 8027578498508504510LL;
unsigned char var_10 = (unsigned char)109;
long long int var_13 = -7564407743842681293LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-41;
unsigned long long int var_16 = 17084103890696038880ULL;
unsigned short var_17 = (unsigned short)33447;
long long int var_18 = -6743647831557995948LL;
int zero = 0;
long long int var_20 = -5810695454178632786LL;
unsigned int var_21 = 3967552717U;
unsigned char var_22 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
