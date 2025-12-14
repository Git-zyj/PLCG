#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9766566008997145465ULL;
int var_1 = -297259750;
unsigned long long int var_2 = 18349582796029495173ULL;
unsigned long long int var_3 = 1853494617715448099ULL;
short var_4 = (short)26212;
int var_5 = 1407753185;
unsigned char var_6 = (unsigned char)102;
long long int var_7 = 1505615071850587130LL;
long long int var_8 = 667095589941809191LL;
unsigned char var_9 = (unsigned char)222;
long long int var_11 = 4569154881860656555LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-7467;
long long int var_14 = -2097520298714531378LL;
int zero = 0;
long long int var_15 = 1495793700054025993LL;
long long int var_16 = 5197384734349428833LL;
long long int var_17 = -547684141031069951LL;
unsigned char var_18 = (unsigned char)255;
unsigned long long int var_19 = 15948011233722305844ULL;
short var_20 = (short)-4403;
unsigned long long int var_21 = 12039859922063892210ULL;
signed char var_22 = (signed char)-101;
long long int var_23 = 3132539772852212533LL;
long long int var_24 = -6773432794501639940LL;
long long int var_25 = 9158886419492840851LL;
short var_26 = (short)6906;
int var_27 = -115647408;
unsigned char var_28 = (unsigned char)7;
unsigned short arr_1 [10] ;
unsigned long long int arr_3 [10] [10] [10] ;
long long int arr_10 [18] ;
unsigned int arr_11 [18] ;
unsigned int arr_12 [18] ;
long long int arr_13 [14] ;
unsigned char arr_14 [14] ;
unsigned char arr_17 [14] [14] ;
unsigned char arr_18 [14] [14] [14] ;
unsigned short arr_20 [14] [14] [14] [14] ;
unsigned short arr_23 [14] [14] [14] [14] ;
unsigned long long int arr_26 [20] ;
unsigned short arr_27 [20] [20] ;
signed char arr_28 [20] ;
short arr_32 [12] ;
unsigned char arr_37 [12] [12] [12] [12] ;
signed char arr_8 [10] [10] ;
int arr_9 [10] [10] ;
signed char arr_15 [14] ;
unsigned char arr_24 [14] [14] [14] [14] ;
int arr_29 [20] ;
unsigned char arr_30 [20] ;
int arr_40 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)39134;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 12749371748061306533ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 9005227427751408210LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 1078840809U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 208216416U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = -6437765657842226910LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)221 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)102 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)48802;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)23024 : (unsigned short)28522;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = 1110146577224016638ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)61940;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_32 [i_0] = (short)7500;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = -905458213;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)-112 : (signed char)11;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)247 : (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = 912066628;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_40 [i_0] = -745010276;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
