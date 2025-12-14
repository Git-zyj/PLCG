#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1068673155497791390LL;
long long int var_2 = 6513699282915308105LL;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = 8072922000250162011LL;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)59;
signed char var_14 = (signed char)-8;
int zero = 0;
signed char var_15 = (signed char)-49;
int var_16 = 1949799888;
unsigned char var_17 = (unsigned char)84;
signed char var_18 = (signed char)72;
unsigned long long int var_19 = 10762407083168478497ULL;
signed char var_20 = (signed char)42;
short var_21 = (short)24661;
unsigned long long int var_22 = 12719245836270329995ULL;
long long int var_23 = 8358213354041215424LL;
unsigned long long int var_24 = 5050151217214262493ULL;
signed char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
