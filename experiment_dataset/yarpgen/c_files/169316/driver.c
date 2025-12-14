#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13449;
unsigned char var_2 = (unsigned char)92;
unsigned short var_4 = (unsigned short)13279;
short var_6 = (short)-7;
short var_7 = (short)5789;
unsigned char var_8 = (unsigned char)242;
unsigned long long int var_9 = 91109587313994315ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)45218;
unsigned long long int var_13 = 17761590290733686601ULL;
int zero = 0;
signed char var_14 = (signed char)-33;
int var_15 = 847209746;
unsigned int var_16 = 971826842U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)23883;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
