#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 10819486866249601500ULL;
unsigned char var_3 = (unsigned char)147;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_7 = 1227679957607434607LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)186;
int zero = 0;
unsigned long long int var_11 = 9119185711632915853ULL;
unsigned short var_12 = (unsigned short)19049;
unsigned char var_13 = (unsigned char)23;
unsigned char var_14 = (unsigned char)33;
unsigned int var_15 = 3930881287U;
int arr_5 [20] ;
long long int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 587271270 : 548606925;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -7605442801228325339LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
