#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2312410747U;
unsigned char var_1 = (unsigned char)85;
unsigned long long int var_2 = 18034092070867182696ULL;
unsigned long long int var_3 = 18058809718471341659ULL;
short var_4 = (short)6129;
short var_6 = (short)-19031;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-19374;
signed char var_9 = (signed char)-12;
unsigned char var_10 = (unsigned char)206;
int zero = 0;
unsigned char var_11 = (unsigned char)37;
unsigned char var_12 = (unsigned char)191;
unsigned short var_13 = (unsigned short)56441;
unsigned int var_14 = 118692847U;
unsigned long long int var_15 = 8903780116251319580ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)17;
unsigned short var_18 = (unsigned short)20884;
signed char var_19 = (signed char)-108;
unsigned short var_20 = (unsigned short)55911;
unsigned char var_21 = (unsigned char)54;
signed char var_22 = (signed char)-104;
long long int var_23 = -4648254682395513796LL;
unsigned int var_24 = 1319538288U;
unsigned long long int var_25 = 5328253348299301600ULL;
unsigned int var_26 = 2225042840U;
unsigned char var_27 = (unsigned char)251;
short var_28 = (short)18649;
signed char var_29 = (signed char)-16;
unsigned long long int var_30 = 9226590631931008860ULL;
unsigned char var_31 = (unsigned char)19;
short arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
unsigned short arr_3 [15] [15] ;
unsigned long long int arr_4 [15] [15] [15] [15] ;
unsigned long long int arr_5 [15] ;
unsigned int arr_10 [21] [21] [21] ;
short arr_12 [21] ;
short arr_14 [21] [21] ;
_Bool arr_15 [21] [21] ;
unsigned long long int arr_17 [21] [21] ;
signed char arr_19 [21] ;
unsigned short arr_20 [21] ;
unsigned int arr_25 [22] ;
unsigned short arr_27 [22] ;
unsigned char arr_28 [22] ;
unsigned char arr_6 [15] ;
unsigned long long int arr_29 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-23457 : (short)18261;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 13629151066987177807ULL : 10772067905783852862ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)38836 : (unsigned short)39021;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 17601871622418146499ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16542899382985915464ULL : 2653496572578541181ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3290429087U : 546026627U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-31402 : (short)-8860;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-15758 : (short)8204;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = 3736949131584019709ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10955 : (unsigned short)48772;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = 2893734849U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (unsigned short)11428;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)250 : (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = 3201386813011185486ULL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
