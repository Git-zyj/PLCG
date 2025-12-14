#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55840;
unsigned long long int var_1 = 11945361501481499030ULL;
long long int var_4 = -272594845862182416LL;
long long int var_5 = -4030228966049305525LL;
unsigned char var_6 = (unsigned char)233;
unsigned long long int var_7 = 8082217618983496793ULL;
long long int var_8 = 1825717462093183552LL;
unsigned int var_9 = 1702333152U;
int var_10 = 945747770;
unsigned short var_11 = (unsigned short)23389;
int zero = 0;
unsigned short var_12 = (unsigned short)47138;
unsigned long long int var_13 = 9291047712135115812ULL;
unsigned long long int var_14 = 9459603141145438762ULL;
signed char var_15 = (signed char)-15;
long long int var_16 = -463301753752408058LL;
short var_17 = (short)-24285;
short var_18 = (short)-24153;
unsigned char var_19 = (unsigned char)111;
unsigned char var_20 = (unsigned char)160;
unsigned long long int var_21 = 5503582527260029828ULL;
long long int var_22 = -7966008278392911151LL;
unsigned char var_23 = (unsigned char)54;
_Bool arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
long long int arr_3 [19] ;
long long int arr_8 [21] [21] ;
long long int arr_10 [21] ;
unsigned int arr_12 [21] [21] ;
unsigned long long int arr_13 [21] [21] ;
unsigned char arr_2 [19] ;
unsigned long long int arr_5 [19] [19] ;
unsigned int arr_15 [21] ;
unsigned long long int arr_18 [21] [21] [21] ;
unsigned char arr_21 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 4535340273093720245LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = -2558621080864742123LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 9147083865663959292LL : 1327951882136917892LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 37908225U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 11821605456866646861ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 2012753161484912600ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 486091307U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3966591872905481876ULL : 11646692329675166828ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)60 : (unsigned char)12;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
