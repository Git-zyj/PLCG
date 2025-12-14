#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18022;
unsigned long long int var_5 = 2678381180269279860ULL;
unsigned short var_6 = (unsigned short)63097;
unsigned short var_7 = (unsigned short)22571;
int var_10 = -624119755;
long long int var_11 = -2864302382315839569LL;
int zero = 0;
int var_16 = 1261556568;
unsigned short var_17 = (unsigned short)39404;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)23921;
void init() {
}

void checksum() {
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
