#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)208;
unsigned short var_5 = (unsigned short)62360;
unsigned long long int var_6 = 5962773995536815722ULL;
int var_8 = -352641649;
unsigned long long int var_9 = 7458257511764978100ULL;
unsigned short var_10 = (unsigned short)54480;
unsigned long long int var_11 = 12526614899936195949ULL;
long long int var_12 = 7450700928430722711LL;
int zero = 0;
unsigned int var_14 = 3853356385U;
short var_15 = (short)12038;
short var_16 = (short)-17340;
unsigned char var_17 = (unsigned char)235;
unsigned long long int var_18 = 16987695967086878418ULL;
unsigned short var_19 = (unsigned short)31482;
unsigned long long int var_20 = 41333250486492214ULL;
unsigned short var_21 = (unsigned short)54451;
unsigned long long int var_22 = 13631872468585574569ULL;
unsigned short arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [23] [23] ;
short arr_4 [23] [23] ;
unsigned int arr_5 [23] [23] ;
short arr_6 [23] [23] ;
unsigned int arr_10 [23] [23] ;
unsigned char arr_11 [23] ;
int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)45076;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4362383978189819039ULL : 6413565297445110729ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1490549824120334838ULL : 14641553940104583539ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3142855601762704756ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-15296;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1371806817U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)25975;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 3496010582U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 1197392577;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
