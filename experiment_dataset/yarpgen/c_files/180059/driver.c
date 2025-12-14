#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13581377227084972104ULL;
unsigned int var_2 = 2197827123U;
unsigned short var_6 = (unsigned short)55606;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)142;
unsigned long long int var_13 = 18180461297681308369ULL;
unsigned long long int var_16 = 14671609598318578169ULL;
signed char var_17 = (signed char)127;
unsigned long long int var_18 = 1542303557793247118ULL;
unsigned short var_19 = (unsigned short)25921;
int zero = 0;
long long int var_20 = -5758269637523529886LL;
unsigned int var_21 = 774201500U;
_Bool var_22 = (_Bool)0;
long long int var_23 = -4717127370878442733LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
