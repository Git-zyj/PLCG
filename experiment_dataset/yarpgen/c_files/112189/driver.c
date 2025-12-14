#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = -4753571654390674454LL;
unsigned long long int var_6 = 16410164879431430309ULL;
signed char var_10 = (signed char)7;
unsigned char var_12 = (unsigned char)175;
unsigned int var_13 = 456046228U;
unsigned char var_15 = (unsigned char)107;
short var_17 = (short)22904;
int zero = 0;
long long int var_18 = 3758733822876649643LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
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
