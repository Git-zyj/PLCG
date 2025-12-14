#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -341039779;
short var_1 = (short)-13825;
unsigned long long int var_2 = 12629501285977372543ULL;
unsigned char var_3 = (unsigned char)106;
unsigned short var_4 = (unsigned short)54166;
short var_5 = (short)28246;
int var_6 = -286682924;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)24;
unsigned char var_9 = (unsigned char)122;
short var_10 = (short)-9811;
_Bool var_11 = (_Bool)0;
int var_12 = -1501614361;
int var_13 = 497604381;
unsigned int var_14 = 3174480468U;
int var_15 = -1588893753;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-14;
short var_18 = (short)10886;
unsigned long long int var_19 = 1399839633486898003ULL;
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
