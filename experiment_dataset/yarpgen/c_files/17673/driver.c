#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-18593;
unsigned int var_7 = 3257746384U;
unsigned long long int var_8 = 8268224059354499233ULL;
unsigned int var_11 = 2995533073U;
unsigned int var_12 = 1675660771U;
unsigned int var_14 = 3765206489U;
unsigned int var_15 = 240575461U;
unsigned long long int var_17 = 4267317772079206731ULL;
unsigned char var_18 = (unsigned char)197;
int var_19 = 999615551;
int zero = 0;
long long int var_20 = -7471537592413515554LL;
int var_21 = 1703855188;
_Bool var_22 = (_Bool)1;
int var_23 = 1096220866;
unsigned long long int var_24 = 487076996641546773ULL;
unsigned long long int var_25 = 11007969940110176477ULL;
int var_26 = -737313311;
long long int var_27 = -5558106477947983560LL;
unsigned long long int var_28 = 14389947991981869567ULL;
long long int arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned short arr_2 [25] ;
unsigned short arr_3 [25] ;
unsigned char arr_7 [25] ;
unsigned long long int arr_8 [25] ;
short arr_10 [17] ;
long long int arr_13 [17] ;
unsigned char arr_4 [25] ;
_Bool arr_5 [25] ;
unsigned long long int arr_9 [25] [25] ;
unsigned short arr_14 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -3799519737148347690LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20291 : (unsigned short)59875;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)38667;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4006 : (unsigned short)23151;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 11445362073965805899ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)27526 : (short)29471;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3999589076944161358LL : -8559543145584957233LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 8690758975898526423ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22527 : (unsigned short)50741;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
