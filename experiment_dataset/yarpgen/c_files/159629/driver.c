#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47097;
unsigned long long int var_1 = 5469761365293448755ULL;
int var_2 = 1130314758;
long long int var_3 = -7853754801953646268LL;
unsigned short var_4 = (unsigned short)38515;
int var_5 = 1463516277;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-11530;
_Bool var_8 = (_Bool)0;
long long int var_9 = -4970508987448370229LL;
int var_10 = -819909942;
_Bool var_11 = (_Bool)1;
int var_12 = 432393945;
int zero = 0;
unsigned short var_13 = (unsigned short)35338;
unsigned short var_14 = (unsigned short)52807;
unsigned char var_15 = (unsigned char)197;
unsigned short var_16 = (unsigned short)12307;
unsigned short var_17 = (unsigned short)54325;
long long int var_18 = 2482314435964268137LL;
int var_19 = -630218323;
long long int var_20 = -960254317399435339LL;
unsigned long long int var_21 = 1846603431537100393ULL;
short var_22 = (short)12944;
unsigned short var_23 = (unsigned short)59302;
unsigned short var_24 = (unsigned short)37181;
int var_25 = 477433718;
unsigned long long int var_26 = 10954803694528416645ULL;
unsigned int var_27 = 1776347844U;
signed char var_28 = (signed char)-6;
long long int var_29 = -7506750569741836641LL;
short var_30 = (short)8481;
unsigned short var_31 = (unsigned short)24225;
unsigned short var_32 = (unsigned short)6147;
unsigned char var_33 = (unsigned char)190;
unsigned short var_34 = (unsigned short)62575;
int var_35 = 1921789763;
short var_36 = (short)-18037;
unsigned short var_37 = (unsigned short)18127;
signed char var_38 = (signed char)103;
int var_39 = -1815029940;
unsigned short arr_0 [19] ;
unsigned long long int arr_1 [19] [19] ;
unsigned char arr_7 [12] [12] ;
unsigned char arr_8 [12] ;
unsigned int arr_20 [12] [12] [12] [12] ;
unsigned int arr_28 [23] ;
unsigned char arr_29 [24] ;
long long int arr_34 [24] [24] ;
long long int arr_39 [24] [24] [24] [24] [24] [24] [24] ;
long long int arr_41 [24] ;
unsigned short arr_44 [24] ;
unsigned char arr_5 [19] ;
unsigned char arr_10 [12] [12] ;
_Bool arr_14 [12] [12] ;
unsigned long long int arr_15 [12] ;
unsigned short arr_24 [12] ;
_Bool arr_25 [12] ;
_Bool arr_56 [24] [24] [24] ;
unsigned short arr_57 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)14764;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 13750524972342010214ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 4220526675U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = 2915021759U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = 6634589015533802777LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 5223601136674646091LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = -8014967714298958620LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_44 [i_0] = (unsigned short)46058;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 6815312676386703529ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (unsigned short)53773;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (unsigned short)40063;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_56 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
