#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37815;
long long int var_2 = -3738762418690872943LL;
unsigned long long int var_3 = 12240708307932794501ULL;
int var_4 = -253809536;
unsigned char var_5 = (unsigned char)223;
unsigned long long int var_6 = 6176637344154313709ULL;
unsigned long long int var_7 = 6924340515957700678ULL;
unsigned int var_8 = 2249301893U;
int var_9 = 785718778;
unsigned char var_10 = (unsigned char)94;
int zero = 0;
unsigned short var_11 = (unsigned short)5383;
int var_12 = 314702894;
long long int var_13 = 1289376741151113355LL;
long long int var_14 = -6463613204508751921LL;
signed char var_15 = (signed char)-73;
unsigned short var_16 = (unsigned short)47448;
unsigned int var_17 = 2084863916U;
unsigned char var_18 = (unsigned char)200;
short var_19 = (short)-6173;
signed char var_20 = (signed char)15;
unsigned long long int var_21 = 1832607078594328775ULL;
int var_22 = 1118216730;
short var_23 = (short)4937;
signed char var_24 = (signed char)31;
unsigned long long int var_25 = 4179399955245301443ULL;
unsigned long long int var_26 = 9195264993142323367ULL;
signed char var_27 = (signed char)-44;
unsigned short var_28 = (unsigned short)62197;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 9836292364904324928ULL;
short arr_0 [18] ;
_Bool arr_1 [18] [18] ;
int arr_2 [18] [18] ;
unsigned long long int arr_4 [18] ;
unsigned short arr_7 [18] ;
unsigned int arr_8 [18] ;
long long int arr_10 [18] ;
unsigned char arr_17 [18] ;
long long int arr_21 [18] [18] [18] ;
_Bool arr_24 [23] ;
short arr_3 [18] ;
_Bool arr_6 [18] ;
int arr_18 [18] [18] ;
unsigned short arr_19 [18] [18] [18] ;
long long int arr_22 [18] ;
unsigned short arr_26 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)6681;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -124862569;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1892031768883694008ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)59208;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 2653562368U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = -7754848270793038593LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -3649371123702843600LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)25569;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 1734113195 : 1815520232;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)56875 : (unsigned short)34697;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = -7590915929810048899LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58106 : (unsigned short)26812;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
