#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10767398020152777028ULL;
unsigned long long int var_2 = 4019331726991764316ULL;
int var_3 = 120776022;
short var_6 = (short)6515;
unsigned int var_7 = 1479943256U;
unsigned short var_8 = (unsigned short)1810;
unsigned char var_9 = (unsigned char)24;
unsigned short var_10 = (unsigned short)44132;
unsigned long long int var_15 = 16062280976298914983ULL;
int zero = 0;
short var_17 = (short)25267;
unsigned int var_18 = 1746576549U;
unsigned long long int var_19 = 7032407299299759702ULL;
unsigned int var_20 = 252184851U;
unsigned long long int var_21 = 15203362956076457647ULL;
int var_22 = -989819230;
unsigned char arr_0 [11] ;
_Bool arr_1 [11] [11] ;
unsigned long long int arr_2 [11] ;
unsigned int arr_5 [18] [18] ;
unsigned char arr_6 [18] [18] ;
_Bool arr_4 [11] ;
unsigned long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 15352492985461924700ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 2139049601U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 9028553070139197103ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
