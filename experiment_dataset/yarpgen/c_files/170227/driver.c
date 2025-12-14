#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
_Bool var_1 = (_Bool)0;
long long int var_2 = -4876479111636080779LL;
short var_3 = (short)6614;
int var_4 = -1585701975;
unsigned short var_5 = (unsigned short)8344;
short var_6 = (short)-23665;
long long int var_7 = 1448010150089754001LL;
_Bool var_12 = (_Bool)0;
unsigned short var_16 = (unsigned short)15695;
int var_17 = -184929666;
int zero = 0;
unsigned int var_18 = 3557065710U;
int var_19 = 619521722;
unsigned char var_20 = (unsigned char)201;
long long int var_21 = 2761401958173391904LL;
unsigned char var_22 = (unsigned char)123;
unsigned int var_23 = 3873566683U;
unsigned short var_24 = (unsigned short)42454;
short var_25 = (short)27693;
unsigned short var_26 = (unsigned short)5783;
short var_27 = (short)9636;
long long int var_28 = -5100242576210257753LL;
_Bool var_29 = (_Bool)0;
int var_30 = -1176451423;
unsigned int arr_0 [15] ;
unsigned int arr_3 [15] [15] ;
long long int arr_5 [15] ;
unsigned short arr_6 [15] [15] [15] ;
long long int arr_8 [15] [15] [15] [15] ;
unsigned short arr_9 [15] ;
int arr_2 [15] ;
int arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2378133008U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1886487792U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 797124024683433519LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)7291;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -5176009814360801219LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)6538;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1971180792;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = -1877113776;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
