#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4566;
long long int var_1 = -2069702145678147454LL;
unsigned short var_2 = (unsigned short)49646;
long long int var_3 = 1253104829808867373LL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)209;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)87;
long long int var_10 = 2165416754396760689LL;
int zero = 0;
unsigned long long int var_12 = 16990848442559221684ULL;
long long int var_13 = 5401120268341493769LL;
unsigned long long int var_14 = 8027576903696535068ULL;
long long int var_15 = -4489499050020676502LL;
long long int var_16 = -7961350563251732953LL;
long long int var_17 = 2118721893072074536LL;
unsigned short var_18 = (unsigned short)48158;
unsigned char var_19 = (unsigned char)209;
unsigned short arr_0 [22] [22] ;
long long int arr_1 [22] [22] ;
unsigned short arr_2 [22] [22] ;
unsigned short arr_3 [22] ;
unsigned int arr_4 [22] [22] ;
unsigned long long int arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)42913;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -2248123911430574376LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)49659;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34520 : (unsigned short)56507;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 743508103U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 3388945092205937190ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
