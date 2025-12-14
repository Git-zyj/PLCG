#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1522832280;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8214015196134271878LL;
unsigned char var_4 = (unsigned char)99;
short var_6 = (short)-11553;
unsigned char var_7 = (unsigned char)58;
unsigned char var_8 = (unsigned char)56;
unsigned short var_10 = (unsigned short)32821;
unsigned short var_11 = (unsigned short)49892;
signed char var_13 = (signed char)45;
int zero = 0;
unsigned char var_14 = (unsigned char)231;
unsigned int var_15 = 2549067039U;
unsigned char var_16 = (unsigned char)36;
unsigned short var_17 = (unsigned short)54541;
unsigned short var_18 = (unsigned short)10566;
int var_19 = 1681228003;
unsigned short var_20 = (unsigned short)32023;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1948503526U;
signed char var_23 = (signed char)-29;
int var_24 = 1206594648;
unsigned int var_25 = 1046644011U;
long long int var_26 = 6567328086437133481LL;
long long int var_27 = -7856949533049238278LL;
long long int var_28 = -7073081886219303348LL;
unsigned short var_29 = (unsigned short)24161;
unsigned char var_30 = (unsigned char)215;
unsigned char var_31 = (unsigned char)127;
unsigned int arr_2 [22] ;
signed char arr_4 [22] [22] [22] ;
unsigned short arr_5 [22] ;
short arr_6 [22] ;
unsigned char arr_7 [22] [22] [22] [22] ;
unsigned char arr_11 [23] ;
unsigned short arr_12 [23] ;
unsigned short arr_13 [23] ;
unsigned int arr_17 [24] ;
short arr_18 [24] ;
unsigned int arr_19 [24] ;
int arr_21 [24] ;
_Bool arr_23 [18] ;
unsigned char arr_26 [16] ;
unsigned char arr_14 [23] ;
unsigned short arr_25 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1780029409U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)63040;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)23644;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)49141;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned short)52692;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 2309615657U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (short)19189;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 2828288833U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = 1247532808;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (unsigned short)62302;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
