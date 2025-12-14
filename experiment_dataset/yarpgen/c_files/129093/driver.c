#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8993;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-72;
short var_5 = (short)-7487;
unsigned int var_10 = 3529588744U;
short var_11 = (short)-15161;
unsigned int var_13 = 299929571U;
unsigned char var_14 = (unsigned char)132;
int zero = 0;
unsigned long long int var_15 = 1344136716908843765ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-25252;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)100;
signed char var_22 = (signed char)88;
unsigned char var_23 = (unsigned char)18;
short var_24 = (short)5741;
short var_25 = (short)-21978;
_Bool var_26 = (_Bool)1;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
unsigned short arr_3 [17] ;
unsigned char arr_4 [17] [17] ;
unsigned short arr_8 [25] ;
_Bool arr_9 [25] [25] ;
unsigned int arr_15 [17] ;
short arr_16 [17] [17] ;
short arr_18 [17] [17] ;
unsigned int arr_19 [17] [17] [17] ;
unsigned char arr_21 [17] [17] [17] ;
unsigned char arr_5 [17] ;
short arr_6 [17] ;
signed char arr_7 [17] ;
short arr_10 [25] ;
unsigned long long int arr_11 [25] [25] ;
unsigned long long int arr_12 [25] ;
unsigned short arr_20 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2127885866U : 1640510586U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2872047914U : 2151550566U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 18069525308851237241ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)29774;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned short)34844;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 4032185720U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = (short)477;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = (short)22581;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 3842182165U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)114 : (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)22430 : (short)725;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)1 : (signed char)-56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (short)28389;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = 14627309626137240157ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 18066224923749458938ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (unsigned short)6882;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
