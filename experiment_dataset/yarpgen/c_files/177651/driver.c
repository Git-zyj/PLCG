#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3135147758U;
unsigned short var_3 = (unsigned short)65021;
long long int var_4 = -3382262930369354323LL;
int var_5 = 95240343;
unsigned short var_9 = (unsigned short)7817;
int var_10 = -381880044;
unsigned long long int var_11 = 9777073672659893119ULL;
int var_12 = -99296398;
unsigned short var_13 = (unsigned short)13800;
unsigned long long int var_14 = 17582682855585008725ULL;
unsigned long long int var_15 = 8907483871909406493ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 911950194505464040ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)55196;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
