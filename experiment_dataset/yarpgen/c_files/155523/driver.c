#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 688527145U;
unsigned char var_1 = (unsigned char)197;
unsigned long long int var_2 = 4240949290368205367ULL;
unsigned long long int var_3 = 5805113363608926956ULL;
unsigned long long int var_4 = 11140056261261952450ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)51795;
int var_13 = 813384101;
int zero = 0;
int var_14 = 260318566;
unsigned short var_15 = (unsigned short)26221;
unsigned int var_16 = 1689390719U;
unsigned long long int var_17 = 12251182664145666609ULL;
int var_18 = 1499597893;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)13718;
int var_21 = -446898445;
long long int var_22 = 2443337674844190300LL;
_Bool var_23 = (_Bool)0;
int arr_0 [19] ;
unsigned char arr_1 [19] ;
int arr_2 [19] ;
unsigned int arr_4 [19] [19] ;
int arr_5 [19] [19] [19] ;
_Bool arr_6 [19] ;
int arr_7 [19] [19] [19] ;
unsigned int arr_10 [13] ;
unsigned int arr_14 [13] ;
int arr_16 [13] [13] ;
long long int arr_17 [13] [13] [13] ;
unsigned int arr_18 [13] [13] [13] [13] ;
unsigned short arr_20 [15] [15] ;
int arr_21 [15] ;
unsigned short arr_23 [15] [15] [15] ;
_Bool arr_8 [19] [19] ;
_Bool arr_13 [13] ;
unsigned short arr_19 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1422439472 : 548617228;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)116 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1740691052 : -1319852203;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 669306873U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 387990060;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2083853341 : 1057647325;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 2322567139U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 2021987691U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = 813683905;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -32655519508121482LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 3147472964U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)39537 : (unsigned short)2495;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = -235884853;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)35861 : (unsigned short)2170;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)19790;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
