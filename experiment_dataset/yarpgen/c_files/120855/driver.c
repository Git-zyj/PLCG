#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -453647357;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3337097421U;
unsigned int var_4 = 2023991277U;
_Bool var_5 = (_Bool)0;
int var_6 = 1929511668;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)71;
short var_11 = (short)12821;
unsigned short var_13 = (unsigned short)62519;
int zero = 0;
unsigned int var_15 = 299360668U;
long long int var_16 = 2177314243485995556LL;
unsigned long long int var_17 = 4632994121075986648ULL;
unsigned char var_18 = (unsigned char)235;
long long int var_19 = -8357132814982403370LL;
unsigned int var_20 = 280898100U;
_Bool var_21 = (_Bool)1;
int var_22 = -1844593990;
int var_23 = 1261200173;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)44350;
unsigned long long int var_26 = 2607503233525986248ULL;
unsigned short var_27 = (unsigned short)31264;
unsigned char var_28 = (unsigned char)166;
unsigned short var_29 = (unsigned short)5272;
int arr_0 [22] ;
long long int arr_1 [22] ;
_Bool arr_2 [22] ;
unsigned short arr_3 [22] ;
unsigned int arr_5 [22] [22] ;
short arr_6 [22] [22] ;
unsigned short arr_14 [22] [22] [22] ;
signed char arr_17 [22] [22] [22] [22] [22] ;
long long int arr_4 [22] ;
unsigned long long int arr_10 [22] ;
signed char arr_11 [22] ;
short arr_18 [22] ;
short arr_29 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1388480371;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -5335187439008686998LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)27671;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1469705279U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)19847;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)64890;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -8897187941241846802LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 7373540823430584382ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (short)3527;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-17251 : (short)-16545;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
