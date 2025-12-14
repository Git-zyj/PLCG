#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3433366970U;
int var_2 = -1520547162;
unsigned long long int var_3 = 2855506245930032447ULL;
unsigned int var_7 = 996864121U;
unsigned long long int var_8 = 2380139767059853955ULL;
short var_10 = (short)27916;
unsigned char var_11 = (unsigned char)39;
unsigned char var_13 = (unsigned char)22;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2213628192466407554LL;
int zero = 0;
short var_16 = (short)882;
unsigned short var_17 = (unsigned short)12100;
unsigned int var_18 = 1794035767U;
unsigned int var_19 = 788313085U;
signed char var_20 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
