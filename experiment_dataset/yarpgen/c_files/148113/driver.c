#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
short var_2 = (short)-20284;
int var_4 = 122201565;
unsigned long long int var_5 = 4699823292486320012ULL;
long long int var_6 = 5960639931792400184LL;
unsigned long long int var_7 = 8649804304059635989ULL;
unsigned short var_8 = (unsigned short)18881;
signed char var_9 = (signed char)122;
unsigned short var_10 = (unsigned short)55097;
int var_11 = -383461545;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)108;
int zero = 0;
unsigned int var_15 = 930996839U;
long long int var_16 = -8350332003978581492LL;
unsigned short var_17 = (unsigned short)25332;
unsigned char var_18 = (unsigned char)119;
unsigned short var_19 = (unsigned short)9077;
unsigned char var_20 = (unsigned char)242;
int var_21 = -1360537731;
unsigned int var_22 = 2071387472U;
signed char var_23 = (signed char)85;
int var_24 = -1924697843;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)207;
long long int var_27 = 540331153553583027LL;
short arr_0 [11] [11] ;
unsigned int arr_1 [11] ;
long long int arr_2 [11] ;
unsigned char arr_5 [11] [11] ;
unsigned long long int arr_6 [11] ;
int arr_10 [11] [11] ;
signed char arr_12 [11] [11] ;
long long int arr_14 [11] ;
int arr_3 [11] ;
short arr_7 [11] ;
long long int arr_8 [11] ;
unsigned char arr_13 [11] [11] ;
long long int arr_16 [11] ;
_Bool arr_17 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)22083;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 308283107U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -226242247589732164LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1770186432942192297ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 424298570;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = -4734836059476846973LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 735513068;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-4637 : (short)-28937;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 55420737084749070LL : -6667085079097991726LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)101 : (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -6154848889230934022LL : -8914348828671410857LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
