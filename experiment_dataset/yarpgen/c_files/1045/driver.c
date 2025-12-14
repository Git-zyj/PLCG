#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-69;
long long int var_3 = -1667575272437001566LL;
signed char var_4 = (signed char)85;
unsigned char var_5 = (unsigned char)48;
unsigned short var_6 = (unsigned short)55687;
long long int var_7 = 8743754442714188501LL;
unsigned int var_8 = 2923229091U;
short var_9 = (short)-7085;
unsigned short var_10 = (unsigned short)6603;
signed char var_11 = (signed char)55;
long long int var_12 = 9051095857060682589LL;
unsigned char var_13 = (unsigned char)46;
int zero = 0;
signed char var_15 = (signed char)54;
int var_16 = -169394756;
unsigned long long int var_17 = 16206208072913571067ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 597134041740956622ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)18146;
unsigned long long int var_22 = 15314218996223577221ULL;
unsigned int var_23 = 1339359237U;
unsigned int var_24 = 2979213996U;
_Bool var_25 = (_Bool)1;
long long int var_26 = 1599148817382021942LL;
short var_27 = (short)-22238;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 17542264401874885925ULL;
unsigned long long int var_30 = 6534104004968384156ULL;
unsigned char var_31 = (unsigned char)101;
signed char var_32 = (signed char)64;
unsigned int var_33 = 1635569946U;
long long int var_34 = -5419374844754905871LL;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)85;
unsigned long long int var_37 = 14068916394349169753ULL;
_Bool var_38 = (_Bool)1;
unsigned char var_39 = (unsigned char)134;
unsigned short var_40 = (unsigned short)17720;
signed char arr_0 [23] ;
signed char arr_1 [23] ;
unsigned char arr_3 [23] [23] ;
long long int arr_4 [23] ;
_Bool arr_5 [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
unsigned char arr_7 [23] [23] [23] [23] ;
unsigned int arr_8 [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] [23] ;
unsigned char arr_12 [23] ;
unsigned int arr_13 [23] [23] [23] ;
signed char arr_14 [23] [23] [23] ;
unsigned long long int arr_16 [23] [23] [23] ;
long long int arr_18 [24] [24] ;
int arr_19 [24] ;
short arr_20 [24] ;
unsigned short arr_22 [24] ;
_Bool arr_23 [24] [24] ;
signed char arr_25 [24] [24] [24] ;
unsigned int arr_30 [19] [19] [19] ;
int arr_33 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)9 : (signed char)-103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7669341956950440982LL : -6642727968897452839LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 13711619314793485828ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)90 : (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 1088693676U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 7769331079424820628ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 7887695347206957049ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3248295314U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 17214521005622688972ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = -4727257899000768670LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 2078831313;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (short)-14297;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34247 : (unsigned short)53976;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 3929960813U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -1311666878;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
