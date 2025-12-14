#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1063693768U;
signed char var_1 = (signed char)97;
short var_2 = (short)16193;
int var_3 = 1863024307;
long long int var_4 = 6503478174696964048LL;
unsigned short var_5 = (unsigned short)2289;
unsigned short var_6 = (unsigned short)16798;
long long int var_7 = -3722653207099354786LL;
int var_8 = 681668063;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-70;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)59465;
unsigned long long int var_14 = 4719338092782288040ULL;
short var_15 = (short)-20325;
unsigned short var_16 = (unsigned short)42536;
unsigned int var_17 = 3078772114U;
int var_18 = 1042069062;
unsigned short arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)51180;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
