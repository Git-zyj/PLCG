#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2832382413659495882ULL;
unsigned long long int var_3 = 7881462675886393207ULL;
unsigned long long int var_4 = 18201509889094010975ULL;
unsigned short var_5 = (unsigned short)15782;
unsigned long long int var_6 = 4375019321173179090ULL;
int var_7 = 2045773275;
unsigned int var_8 = 3968461831U;
unsigned int var_9 = 677340465U;
int var_10 = 840753688;
int var_11 = 258980140;
long long int var_12 = 6286941500737332444LL;
unsigned long long int var_13 = 9564823176876489098ULL;
unsigned int var_14 = 244258137U;
int zero = 0;
signed char var_15 = (signed char)24;
unsigned long long int var_16 = 15867333162678829047ULL;
int var_17 = 87057347;
unsigned short var_18 = (unsigned short)4485;
unsigned char var_19 = (unsigned char)189;
unsigned short var_20 = (unsigned short)26933;
unsigned short var_21 = (unsigned short)15688;
unsigned long long int var_22 = 15843575254517590424ULL;
int var_23 = -798581714;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)65;
signed char var_26 = (signed char)-47;
int var_27 = 1883003271;
int var_28 = 1685209288;
long long int var_29 = 745333704184865469LL;
int var_30 = 1461981073;
long long int var_31 = -6298032456120623689LL;
_Bool arr_0 [10] ;
short arr_7 [12] ;
int arr_8 [12] ;
_Bool arr_10 [12] ;
long long int arr_13 [18] ;
unsigned short arr_14 [18] ;
unsigned long long int arr_15 [18] ;
int arr_16 [18] [18] [18] ;
signed char arr_18 [18] [18] ;
unsigned short arr_19 [18] [18] [18] ;
unsigned long long int arr_21 [18] [18] ;
int arr_23 [18] ;
int arr_25 [18] [18] ;
long long int arr_26 [18] [18] ;
unsigned long long int arr_29 [18] [18] [18] ;
long long int arr_31 [18] [18] ;
unsigned char arr_33 [18] [18] [18] ;
unsigned int arr_34 [18] ;
short arr_40 [18] ;
unsigned char arr_4 [10] ;
unsigned short arr_5 [10] ;
short arr_6 [10] ;
unsigned char arr_11 [12] [12] ;
unsigned long long int arr_12 [12] [12] ;
unsigned char arr_24 [18] [18] ;
int arr_32 [18] [18] ;
int arr_38 [18] [18] [18] ;
unsigned int arr_39 [18] [18] ;
long long int arr_43 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)-19166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 983230410;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 4940466350827270508LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (unsigned short)42888;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = 15125482316902009200ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 410659589;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)62750;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = 11468511593048374409ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = -63678334;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = -943724803;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = -7413846133960884834LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 16334398393745783071ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_31 [i_0] [i_1] = -8761430624078787334LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_34 [i_0] = 2164360778U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = (short)8803;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)59899;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)-24952;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = 633287575697062819ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)198 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_32 [i_0] [i_1] = -1836587683;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 504737265;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_39 [i_0] [i_1] = 950458906U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? 6237073564125974274LL : 4323413854279556454LL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
