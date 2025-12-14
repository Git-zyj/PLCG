#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61456;
unsigned char var_1 = (unsigned char)170;
int var_2 = 1451077171;
int var_3 = 392106219;
unsigned long long int var_4 = 10068522168577058168ULL;
unsigned long long int var_5 = 7539630865979383785ULL;
unsigned int var_6 = 2318045931U;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)83;
short var_11 = (short)684;
unsigned long long int var_12 = 4022664577592699091ULL;
long long int var_13 = -6321821707803077800LL;
int zero = 0;
unsigned long long int var_14 = 7763174475051460400ULL;
unsigned int var_15 = 4094873225U;
int var_16 = 509994653;
unsigned char var_17 = (unsigned char)238;
int var_18 = -351126901;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1435953092U;
unsigned int var_21 = 946143904U;
unsigned char var_22 = (unsigned char)50;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 209128648U;
short arr_0 [19] ;
unsigned short arr_1 [19] ;
int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
signed char arr_5 [19] ;
unsigned short arr_7 [19] [19] ;
int arr_9 [23] ;
unsigned long long int arr_10 [23] [23] ;
_Bool arr_8 [19] ;
unsigned char arr_11 [23] [23] ;
unsigned long long int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-3760;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)14004;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2106033642;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 687655976153767233ULL : 874260791472434529ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)55889;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -769209057;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 11964993684535969579ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)92 : (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 17648932472216959955ULL : 13884080666338915841ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
