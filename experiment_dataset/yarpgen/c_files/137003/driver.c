#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25561;
short var_1 = (short)-18166;
int var_2 = 1947113560;
short var_3 = (short)-25135;
signed char var_4 = (signed char)85;
long long int var_5 = 4981520032665184752LL;
signed char var_6 = (signed char)-61;
_Bool var_7 = (_Bool)1;
short var_8 = (short)16401;
unsigned int var_9 = 2382958464U;
long long int var_10 = -7269186456654326531LL;
long long int var_11 = -6387534832246001220LL;
long long int var_12 = 435437208742122482LL;
signed char var_13 = (signed char)73;
long long int var_14 = -7159834352718912960LL;
int zero = 0;
short var_15 = (short)-6835;
unsigned char var_16 = (unsigned char)229;
unsigned int var_17 = 1773209743U;
short var_18 = (short)-20562;
signed char var_19 = (signed char)19;
unsigned int var_20 = 833561976U;
int var_21 = 851240085;
signed char var_22 = (signed char)69;
long long int var_23 = -8919316280975969413LL;
short var_24 = (short)-22512;
short var_25 = (short)-16135;
short var_26 = (short)30910;
short var_27 = (short)19601;
unsigned long long int var_28 = 17362712048532529360ULL;
short var_29 = (short)-3691;
unsigned long long int var_30 = 5446634936146205853ULL;
signed char var_31 = (signed char)-103;
short var_32 = (short)22220;
unsigned long long int var_33 = 6837696702401753558ULL;
unsigned long long int var_34 = 8394123646804187593ULL;
int var_35 = -295889795;
signed char var_36 = (signed char)113;
unsigned int arr_0 [21] [21] ;
unsigned int arr_1 [21] [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_3 [21] ;
signed char arr_8 [21] ;
short arr_9 [21] [21] ;
unsigned int arr_10 [21] ;
unsigned int arr_16 [21] [21] [21] ;
signed char arr_17 [21] [21] ;
unsigned long long int arr_26 [22] ;
int arr_27 [22] ;
signed char arr_28 [22] [22] ;
long long int arr_29 [22] ;
unsigned int arr_33 [22] [22] [22] ;
int arr_39 [22] [22] [22] ;
unsigned long long int arr_40 [22] [22] [22] [22] ;
unsigned int arr_42 [22] [22] [22] [22] ;
short arr_4 [21] ;
long long int arr_12 [21] ;
signed char arr_13 [21] [21] ;
unsigned int arr_14 [21] ;
short arr_21 [21] ;
int arr_30 [22] ;
short arr_31 [22] ;
short arr_37 [22] [22] [22] [22] ;
int arr_43 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 2919021328U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 3698107037U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 9780174778755151956ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 16747855592708900736ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (short)6244;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 439103000U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2676741199U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = 7350234599297028952ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = -2062346391;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = 8694861391422898523LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 2605836431U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 70313344;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 11823542470891470897ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 3482917907U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)2923;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 4795085486849560329LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 2382894074U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (short)16641;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = 1193773587;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (short)14447;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (short)9770;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_43 [i_0] = 608376648;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
