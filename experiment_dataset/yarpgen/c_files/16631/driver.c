#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4984188105653904094LL;
long long int var_4 = 4865966116135301089LL;
int var_7 = -675809239;
int var_17 = -1234468383;
long long int var_19 = -7972003675304982496LL;
int zero = 0;
unsigned int var_20 = 3071712696U;
unsigned short var_21 = (unsigned short)62556;
unsigned short var_22 = (unsigned short)56343;
signed char var_23 = (signed char)45;
unsigned long long int var_24 = 6660575804747954874ULL;
unsigned short var_25 = (unsigned short)35737;
long long int var_26 = 6854952447588052698LL;
unsigned char var_27 = (unsigned char)135;
unsigned short var_28 = (unsigned short)22579;
int arr_1 [10] [10] ;
int arr_3 [10] ;
long long int arr_4 [10] [10] [10] ;
int arr_7 [15] ;
unsigned char arr_8 [15] ;
_Bool arr_12 [12] ;
short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 395347878;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1671340118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3636044807776984522LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -741093344 : 312593999;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (short)-17552;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
