#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7131472328648392277ULL;
unsigned short var_3 = (unsigned short)49415;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-8436;
int var_10 = -2093180254;
unsigned char var_13 = (unsigned char)118;
int zero = 0;
unsigned short var_18 = (unsigned short)56792;
long long int var_19 = -2012006723744213946LL;
unsigned short var_20 = (unsigned short)21983;
void init() {
}

void checksum() {
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
