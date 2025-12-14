#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8700522036220059891ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)23661;
unsigned char var_13 = (unsigned char)153;
unsigned short var_14 = (unsigned short)259;
unsigned short var_16 = (unsigned short)52128;
unsigned short var_17 = (unsigned short)32830;
signed char var_18 = (signed char)-10;
int zero = 0;
signed char var_20 = (signed char)126;
unsigned long long int var_21 = 5134917651175111697ULL;
unsigned short var_22 = (unsigned short)27299;
short var_23 = (short)-4090;
unsigned char var_24 = (unsigned char)203;
unsigned char var_25 = (unsigned char)215;
unsigned long long int var_26 = 11685266591522485469ULL;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)41095;
int arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned char arr_2 [19] ;
long long int arr_3 [19] ;
unsigned long long int arr_5 [19] ;
_Bool arr_4 [19] [19] ;
long long int arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1879269316;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)6214;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)45 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5759349945894128646LL : 6921077620411820288LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 2015295328919512116ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 3412771924353579801LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
