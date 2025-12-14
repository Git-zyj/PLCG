#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1446936632;
unsigned int var_3 = 802878585U;
unsigned char var_6 = (unsigned char)104;
unsigned char var_7 = (unsigned char)10;
unsigned int var_8 = 3967328709U;
unsigned char var_10 = (unsigned char)208;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-111;
unsigned char var_15 = (unsigned char)232;
unsigned char var_16 = (unsigned char)189;
int zero = 0;
unsigned int var_18 = 1974745247U;
signed char var_19 = (signed char)124;
unsigned long long int var_20 = 12885101500179700679ULL;
unsigned int var_21 = 826346245U;
unsigned int var_22 = 2098281032U;
unsigned char var_23 = (unsigned char)29;
unsigned long long int var_24 = 8752862221709910831ULL;
signed char var_25 = (signed char)-96;
unsigned int var_26 = 803541895U;
unsigned char arr_3 [24] ;
unsigned long long int arr_4 [24] ;
unsigned long long int arr_5 [24] [24] ;
_Bool arr_6 [24] [24] ;
signed char arr_16 [21] ;
unsigned char arr_20 [21] [21] ;
unsigned char arr_22 [21] ;
unsigned long long int arr_27 [21] ;
unsigned int arr_30 [21] ;
unsigned char arr_36 [15] ;
unsigned long long int arr_2 [18] [18] ;
unsigned char arr_7 [24] ;
unsigned char arr_8 [24] ;
unsigned char arr_9 [24] [24] ;
int arr_12 [12] ;
unsigned long long int arr_13 [12] [12] ;
unsigned char arr_26 [21] [21] [21] [21] ;
unsigned long long int arr_29 [21] [21] ;
unsigned char arr_33 [21] ;
unsigned char arr_37 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 14951461429727951412ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 10067805834706165780ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 2259220427117416917ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_30 [i_0] = 4221603720U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_36 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1926345116525737015ULL : 13523674725787550269ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = -934495862;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = 14727581818812361975ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)86 : (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = 2021629348094273869ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_37 [i_0] = (unsigned char)153;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
