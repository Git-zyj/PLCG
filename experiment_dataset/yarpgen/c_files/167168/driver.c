#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-33;
unsigned long long int var_2 = 15072141550271011322ULL;
signed char var_4 = (signed char)-86;
short var_9 = (short)429;
unsigned long long int var_11 = 5133934021514814917ULL;
unsigned short var_12 = (unsigned short)56906;
unsigned long long int var_13 = 1060735225333876274ULL;
int zero = 0;
short var_14 = (short)-962;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3718197935U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)6001;
int var_20 = 497826928;
unsigned short var_21 = (unsigned short)7525;
short var_22 = (short)-10770;
unsigned int var_23 = 1974689243U;
long long int var_24 = -8317378208754568339LL;
long long int arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
_Bool arr_2 [23] ;
_Bool arr_6 [17] ;
short arr_7 [17] ;
_Bool arr_10 [19] ;
_Bool arr_13 [13] [13] ;
int arr_15 [22] ;
signed char arr_16 [22] ;
unsigned char arr_17 [22] [22] ;
unsigned short arr_18 [22] ;
unsigned short arr_3 [23] ;
long long int arr_4 [23] ;
int arr_5 [23] ;
int arr_8 [17] ;
_Bool arr_11 [19] ;
short arr_14 [13] ;
unsigned short arr_26 [22] [22] [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 5744924301842903647LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)53176;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)-1091;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 155829141;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned short)7179;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)22657;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -575080043733580453LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -1444518352;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -524029568;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (short)-31738;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (unsigned short)50493 : (unsigned short)49126;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
