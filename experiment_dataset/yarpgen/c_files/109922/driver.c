#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15959377562753384659ULL;
unsigned char var_1 = (unsigned char)171;
unsigned int var_2 = 2545854794U;
unsigned char var_3 = (unsigned char)117;
unsigned long long int var_4 = 85627841002085008ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-28750;
unsigned short var_7 = (unsigned short)63457;
unsigned char var_8 = (unsigned char)69;
unsigned int var_9 = 3847141874U;
unsigned char var_10 = (unsigned char)215;
short var_11 = (short)29211;
unsigned int var_12 = 2248011236U;
int zero = 0;
unsigned short var_13 = (unsigned short)1752;
unsigned long long int var_14 = 17587557864373211862ULL;
unsigned long long int var_15 = 7651555933940514729ULL;
short var_16 = (short)2360;
unsigned int var_17 = 2060831883U;
int var_18 = 1741658876;
int var_19 = -334940256;
unsigned short var_20 = (unsigned short)37174;
unsigned short var_21 = (unsigned short)24517;
signed char var_22 = (signed char)91;
int var_23 = -2043471799;
unsigned short var_24 = (unsigned short)46392;
long long int var_25 = -3263864760047445141LL;
unsigned short var_26 = (unsigned short)46739;
_Bool arr_0 [21] ;
int arr_1 [21] [21] ;
short arr_10 [23] [23] [23] [23] ;
unsigned int arr_14 [23] [23] [23] [23] [23] ;
short arr_15 [23] ;
int arr_18 [25] ;
short arr_19 [25] [25] ;
_Bool arr_2 [21] ;
_Bool arr_5 [23] ;
unsigned long long int arr_20 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -446425751;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-23493 : (short)14522;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 572824844U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)12916 : (short)27466;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 264660899;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (short)-15161;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 5341796336820870802ULL;
}

void checksum() {
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
