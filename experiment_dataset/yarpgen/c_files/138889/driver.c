#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -716531284;
int var_2 = -1688610940;
signed char var_5 = (signed char)-75;
int var_6 = -2140541373;
long long int var_8 = 3194341503694947220LL;
long long int var_10 = -269693170248850665LL;
int var_12 = -260949246;
unsigned char var_14 = (unsigned char)79;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)-52;
unsigned int var_18 = 662748370U;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 6601946489519987844LL;
unsigned char var_21 = (unsigned char)115;
int var_22 = -16632889;
unsigned int var_23 = 3824824438U;
signed char var_24 = (signed char)43;
unsigned int var_25 = 3130692960U;
long long int var_26 = 4964704961855245496LL;
unsigned long long int var_27 = 16392000564944077510ULL;
unsigned int var_28 = 3317400302U;
_Bool arr_0 [23] [23] ;
int arr_1 [23] ;
unsigned short arr_2 [23] ;
signed char arr_3 [23] ;
unsigned long long int arr_4 [23] ;
_Bool arr_5 [23] ;
_Bool arr_6 [23] [23] ;
long long int arr_7 [23] ;
unsigned short arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1476363675;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)29819;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 6647074982967056014ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -2852583918429743876LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)19127;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
