#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_6 = 622917586;
unsigned long long int var_7 = 8056382229839501096ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)16;
signed char var_11 = (signed char)-46;
unsigned short var_12 = (unsigned short)62193;
int zero = 0;
int var_13 = -514504749;
short var_14 = (short)13623;
unsigned char var_15 = (unsigned char)170;
unsigned int var_16 = 3629727550U;
unsigned short var_17 = (unsigned short)47686;
unsigned long long int var_18 = 14533188495479773349ULL;
int var_19 = 155086432;
unsigned short var_20 = (unsigned short)14282;
unsigned long long int var_21 = 2663991193296565425ULL;
short var_22 = (short)3785;
long long int arr_0 [22] [22] ;
signed char arr_1 [22] ;
short arr_2 [22] ;
unsigned long long int arr_3 [22] ;
unsigned short arr_4 [24] ;
_Bool arr_5 [24] ;
_Bool arr_8 [22] [22] ;
unsigned char arr_10 [16] ;
unsigned short arr_6 [24] ;
unsigned long long int arr_13 [16] ;
_Bool arr_14 [16] ;
int arr_19 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 6631091519092094629LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)891;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 14367136115404351179ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)15134;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)16431;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 8878945006247254300ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 1104857388;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
