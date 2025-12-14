#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10478749409205093495ULL;
short var_3 = (short)-9935;
_Bool var_5 = (_Bool)0;
int var_7 = 1390478410;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 10188497222166378214ULL;
unsigned short var_11 = (unsigned short)60577;
int zero = 0;
unsigned long long int var_12 = 13230577414289023152ULL;
unsigned long long int var_13 = 12139031831934813455ULL;
unsigned int var_14 = 29513382U;
_Bool var_15 = (_Bool)1;
int var_16 = -518922538;
unsigned short var_17 = (unsigned short)5251;
unsigned short var_18 = (unsigned short)30027;
int var_19 = 1924448017;
unsigned short var_20 = (unsigned short)49487;
_Bool var_21 = (_Bool)1;
long long int var_22 = 7443771058766199044LL;
unsigned char var_23 = (unsigned char)160;
int var_24 = 89674240;
int var_25 = -1514327816;
unsigned short var_26 = (unsigned short)31034;
int var_27 = -893555377;
int var_28 = 1027422404;
unsigned short var_29 = (unsigned short)45833;
unsigned long long int var_30 = 10720466417649460504ULL;
unsigned long long int var_31 = 12362599503567922597ULL;
int arr_0 [23] [23] ;
unsigned long long int arr_2 [23] ;
unsigned long long int arr_4 [22] [22] ;
unsigned short arr_5 [22] ;
int arr_6 [22] [22] [22] ;
unsigned long long int arr_8 [22] [22] ;
unsigned long long int arr_10 [22] [22] [22] ;
unsigned short arr_14 [22] ;
unsigned long long int arr_16 [22] [22] [22] ;
int arr_23 [23] ;
unsigned char arr_24 [23] [23] ;
int arr_11 [22] [22] [22] [22] ;
short arr_15 [22] ;
unsigned char arr_20 [22] [22] ;
_Bool arr_21 [22] ;
unsigned short arr_26 [23] [23] ;
unsigned long long int arr_27 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 551568727;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 723652390645073713ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 9178778175058157552ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)44563;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -598653604;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 16558519078419497153ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3451756861556122068ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)33576;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 4890918930069965893ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = -1027030433;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -2041503291;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (short)28213;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)57382 : (unsigned short)53895;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 13165768551628700309ULL : 1640737023982334287ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
