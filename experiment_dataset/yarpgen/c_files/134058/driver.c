#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2564554381U;
unsigned long long int var_1 = 10031816434857341658ULL;
short var_3 = (short)-9421;
unsigned int var_5 = 1932866482U;
unsigned int var_6 = 1940613892U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)154;
unsigned short var_9 = (unsigned short)37291;
unsigned long long int var_10 = 11379392856529602506ULL;
long long int var_11 = -615365376382306574LL;
long long int var_12 = 4514494737176329842LL;
short var_13 = (short)26660;
signed char var_14 = (signed char)105;
int var_15 = 745984381;
unsigned long long int var_16 = 7277461011492775938ULL;
int var_17 = -382682175;
int zero = 0;
short var_18 = (short)-2274;
unsigned char var_19 = (unsigned char)81;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3143269096U;
unsigned short var_22 = (unsigned short)50632;
int var_23 = 457146763;
long long int var_24 = -819040468685839310LL;
int var_25 = -1589140667;
unsigned long long int var_26 = 4172564225223259082ULL;
unsigned long long int var_27 = 6989608648106939166ULL;
long long int var_28 = -4852476058156188366LL;
unsigned int var_29 = 1669364028U;
unsigned long long int var_30 = 2758551627996894413ULL;
short var_31 = (short)-24774;
long long int var_32 = 8201117131152493400LL;
unsigned long long int var_33 = 10722145079387008563ULL;
unsigned long long int var_34 = 1865019867774902811ULL;
signed char var_35 = (signed char)-105;
unsigned long long int var_36 = 221024934867277997ULL;
unsigned char var_37 = (unsigned char)132;
signed char var_38 = (signed char)-122;
unsigned char var_39 = (unsigned char)47;
_Bool var_40 = (_Bool)0;
unsigned int var_41 = 3186004271U;
unsigned short arr_1 [23] ;
signed char arr_2 [23] ;
unsigned short arr_5 [23] ;
int arr_8 [23] [23] ;
unsigned long long int arr_9 [23] ;
long long int arr_10 [23] [23] [23] ;
unsigned short arr_24 [15] [15] [15] [15] ;
unsigned long long int arr_29 [15] [15] [15] [15] [15] ;
unsigned int arr_30 [15] [15] [15] [15] [15] ;
long long int arr_32 [15] [15] [15] [15] [15] ;
unsigned short arr_4 [23] [23] ;
unsigned short arr_7 [23] [23] ;
short arr_16 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)38512;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-63 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)65049;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -1184452509 : -2144886127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 10592896396685949934ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4364259196990784370LL : -6555393567045295562LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)53218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 5488673298161661101ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 4908860U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 6876684149921255008LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)30186 : (unsigned short)14055;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)58354 : (unsigned short)11184;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-12554 : (short)-23082;
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
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
