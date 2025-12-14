#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-62;
short var_2 = (short)-25106;
int var_3 = 1951753700;
unsigned int var_4 = 3790508419U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)64798;
unsigned short var_9 = (unsigned short)13054;
signed char var_10 = (signed char)5;
short var_11 = (short)12949;
unsigned short var_13 = (unsigned short)46660;
unsigned short var_14 = (unsigned short)64651;
int zero = 0;
unsigned int var_15 = 2350718815U;
_Bool var_16 = (_Bool)0;
long long int var_17 = 2920905928809229017LL;
signed char var_18 = (signed char)95;
void init() {
}

void checksum() {
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
