#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -267781037;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3601253427U;
unsigned short var_8 = (unsigned short)50411;
int var_9 = 1706033422;
signed char var_11 = (signed char)115;
unsigned short var_12 = (unsigned short)10713;
int zero = 0;
unsigned short var_14 = (unsigned short)50462;
unsigned short var_15 = (unsigned short)50513;
short var_16 = (short)-820;
unsigned char var_17 = (unsigned char)241;
unsigned char var_18 = (unsigned char)209;
signed char var_19 = (signed char)-124;
unsigned short var_20 = (unsigned short)58441;
_Bool var_21 = (_Bool)1;
int var_22 = 156182816;
unsigned long long int var_23 = 8200350893971803472ULL;
unsigned char var_24 = (unsigned char)184;
signed char var_25 = (signed char)-125;
unsigned short var_26 = (unsigned short)42316;
unsigned short var_27 = (unsigned short)22024;
unsigned char var_28 = (unsigned char)177;
long long int var_29 = -5971606056453080075LL;
unsigned short var_30 = (unsigned short)60193;
signed char var_31 = (signed char)-118;
int arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
unsigned short arr_3 [15] ;
int arr_4 [15] ;
int arr_9 [15] ;
_Bool arr_10 [15] ;
signed char arr_17 [15] [15] ;
int arr_15 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -146745311 : 1865091398;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)63667;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 4330874372125410095ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)53901;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -261380150 : 961466247;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -1626495786;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = 55043661;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
