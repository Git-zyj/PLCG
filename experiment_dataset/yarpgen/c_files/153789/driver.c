#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5258174844395345417LL;
unsigned long long int var_2 = 2324592383504637038ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)23328;
int var_5 = -555134795;
unsigned long long int var_6 = 9317589013090209025ULL;
unsigned long long int var_7 = 15067486971355888515ULL;
unsigned long long int var_8 = 11835236674706321877ULL;
unsigned long long int var_9 = 11936409572667713467ULL;
int zero = 0;
int var_10 = -987794503;
_Bool var_11 = (_Bool)1;
int var_12 = -1709883953;
int var_13 = 238778286;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)29462;
short var_16 = (short)-31853;
long long int var_17 = 5425026629460250988LL;
long long int var_18 = -329655554020754729LL;
short var_19 = (short)7722;
unsigned long long int var_20 = 9755431592987281028ULL;
unsigned short var_21 = (unsigned short)26244;
_Bool var_22 = (_Bool)0;
long long int var_23 = -5204424999872557406LL;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)12039;
int arr_0 [18] [18] ;
_Bool arr_2 [18] ;
unsigned long long int arr_7 [14] [14] ;
int arr_9 [14] [14] [14] ;
int arr_13 [10] [10] ;
unsigned long long int arr_14 [10] [10] ;
unsigned short arr_17 [10] [10] ;
short arr_19 [10] ;
unsigned short arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
int arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -500123995;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 1628653915086972190ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 505066307;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = -1137473600;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = 15237323881495860340ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)36939;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (short)31903;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)2500;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2956311429055103922ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = -2094436848;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
