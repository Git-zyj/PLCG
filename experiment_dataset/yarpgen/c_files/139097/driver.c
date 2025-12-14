#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19553;
unsigned char var_1 = (unsigned char)146;
unsigned int var_3 = 3479940155U;
long long int var_4 = -2809878918680677485LL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)122;
int var_8 = -618467390;
unsigned short var_11 = (unsigned short)46263;
unsigned long long int var_12 = 14793601568820622924ULL;
unsigned short var_14 = (unsigned short)11988;
unsigned char var_15 = (unsigned char)229;
int var_16 = -261170542;
int zero = 0;
long long int var_18 = 3351953609569708749LL;
unsigned short var_19 = (unsigned short)11422;
_Bool var_20 = (_Bool)1;
long long int var_21 = 4898505385191192047LL;
long long int var_22 = 2774498616734706453LL;
int var_23 = -237801801;
_Bool var_24 = (_Bool)1;
long long int var_25 = -196995297666952369LL;
long long int var_26 = -1377397898056421295LL;
unsigned int var_27 = 2257024664U;
unsigned long long int arr_0 [18] ;
int arr_1 [18] ;
int arr_7 [17] [17] [17] ;
unsigned int arr_17 [19] ;
unsigned int arr_18 [19] [19] ;
long long int arr_20 [19] [19] [19] ;
unsigned long long int arr_22 [19] [19] [19] ;
unsigned char arr_3 [18] ;
unsigned short arr_14 [17] [17] ;
unsigned int arr_15 [17] [17] [17] ;
unsigned short arr_16 [17] ;
unsigned long long int arr_23 [19] [19] ;
unsigned char arr_24 [19] [19] [19] ;
unsigned int arr_25 [19] [19] [19] ;
long long int arr_29 [19] [19] ;
int arr_34 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3893128060218843208ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1487359559;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 921934353;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = 2373512200U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = 3977160398U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6450410966625085842LL : -6418041476202243886LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 11891808796651855257ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)14492 : (unsigned short)54688;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1194163380U : 2493665704U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned short)5538;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 9098127067870448345ULL : 18532280473686579ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)69 : (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3217797463U : 3811935701U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? 2593321368077944833LL : -3272095971312823779LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_34 [i_0] = 1833626888;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_34 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
