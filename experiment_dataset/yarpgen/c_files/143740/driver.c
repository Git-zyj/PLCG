#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3426322824945183918ULL;
unsigned int var_1 = 1977562013U;
short var_3 = (short)3132;
unsigned short var_4 = (unsigned short)2439;
unsigned short var_5 = (unsigned short)21943;
long long int var_6 = 7578919209468288805LL;
unsigned char var_7 = (unsigned char)108;
long long int var_8 = 993692883635961718LL;
unsigned char var_9 = (unsigned char)112;
unsigned int var_10 = 2236170137U;
int zero = 0;
unsigned short var_11 = (unsigned short)23919;
long long int var_12 = 1312877013734356991LL;
long long int var_13 = 7663426785277804350LL;
unsigned short var_14 = (unsigned short)8826;
unsigned long long int var_15 = 3980562064299754557ULL;
short var_16 = (short)-6317;
unsigned short var_17 = (unsigned short)48314;
_Bool var_18 = (_Bool)0;
int var_19 = -1829861791;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)241;
unsigned char var_22 = (unsigned char)2;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)89;
long long int var_26 = -8810194014113164880LL;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-12019;
short var_30 = (short)8824;
unsigned short var_31 = (unsigned short)46011;
unsigned long long int var_32 = 14824982323123788314ULL;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)34;
long long int var_35 = -4981509695511443467LL;
unsigned short var_36 = (unsigned short)49433;
unsigned char var_37 = (unsigned char)71;
_Bool arr_0 [15] ;
unsigned int arr_3 [15] ;
_Bool arr_4 [15] ;
unsigned short arr_5 [15] ;
unsigned char arr_9 [15] ;
long long int arr_11 [15] [15] ;
int arr_13 [15] ;
unsigned char arr_14 [15] [15] ;
_Bool arr_15 [15] [15] ;
int arr_20 [14] [14] [14] ;
int arr_22 [14] [14] [14] ;
long long int arr_23 [14] [14] [14] ;
_Bool arr_29 [14] ;
long long int arr_30 [14] [14] ;
unsigned int arr_6 [15] [15] ;
unsigned char arr_12 [15] [15] ;
unsigned char arr_16 [15] ;
_Bool arr_17 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1133032391U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)57575;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 8033663287029641264LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 223875673 : -353369446;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)2 : (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 911083497;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1202825018 : 784148038;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2982423135081899571LL : 2339133977180799632LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_30 [i_0] [i_1] = 8143427620866325255LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 3399517513U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)49 : (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
