#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned char var_1 = (unsigned char)64;
signed char var_2 = (signed char)-97;
_Bool var_3 = (_Bool)0;
int var_5 = 1899050040;
unsigned char var_6 = (unsigned char)150;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_10 = (short)17672;
int var_11 = 688874198;
short var_12 = (short)-17007;
int zero = 0;
unsigned int var_13 = 3425161623U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 513982900172387813ULL;
unsigned long long int var_16 = 14013261391316778887ULL;
unsigned long long int var_17 = 7186691322726569534ULL;
signed char var_18 = (signed char)-46;
signed char var_19 = (signed char)-92;
unsigned short var_20 = (unsigned short)14602;
unsigned long long int var_21 = 9203712968474605712ULL;
unsigned long long int var_22 = 974419744291257713ULL;
unsigned long long int var_23 = 6533075426908262998ULL;
short var_24 = (short)7281;
short var_25 = (short)31916;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)54712;
signed char var_28 = (signed char)27;
unsigned long long int var_29 = 8669595963935698458ULL;
signed char var_30 = (signed char)-126;
unsigned short var_31 = (unsigned short)65239;
unsigned short var_32 = (unsigned short)10639;
int var_33 = -2105542043;
unsigned short var_34 = (unsigned short)24570;
unsigned short var_35 = (unsigned short)8131;
signed char arr_0 [19] ;
int arr_1 [19] ;
signed char arr_2 [19] ;
unsigned short arr_4 [16] ;
signed char arr_8 [16] [16] [16] ;
signed char arr_12 [16] [16] ;
long long int arr_19 [11] [11] ;
int arr_22 [10] ;
unsigned int arr_3 [19] ;
unsigned char arr_10 [16] ;
unsigned short arr_11 [16] ;
signed char arr_16 [16] [16] ;
unsigned long long int arr_17 [16] [16] [16] [16] ;
signed char arr_20 [11] ;
unsigned char arr_21 [11] ;
signed char arr_30 [10] [10] ;
unsigned long long int arr_31 [10] [10] [10] ;
unsigned long long int arr_32 [10] ;
int arr_35 [14] [14] ;
long long int arr_39 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1812568104;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)46156;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_19 [i_0] [i_1] = 8008788630801022393LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = 756817388;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1658514123U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)1975;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)81 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 17414951539994041937ULL : 173811747653405560ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-109 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13440400948980201148ULL : 13476332036183121712ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 1124734935428072463ULL : 16606692215133066685ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_35 [i_0] [i_1] = -875655997;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_39 [i_0] = 1001700828257585349LL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
