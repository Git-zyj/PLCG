#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1372476695;
long long int var_2 = 8160185144433427166LL;
int var_3 = 1014170902;
int var_4 = -1514158951;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)70;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 12795612260746704986ULL;
short var_12 = (short)9554;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2587877034U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int var_17 = 1764832047;
unsigned short var_18 = (unsigned short)34455;
unsigned char var_19 = (unsigned char)27;
unsigned char var_20 = (unsigned char)170;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 661216314669947914ULL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)214;
long long int var_25 = 8892818963116229702LL;
unsigned long long int var_26 = 15845326977233093358ULL;
short arr_0 [24] ;
unsigned int arr_2 [24] [24] ;
signed char arr_5 [24] ;
short arr_6 [24] [24] ;
long long int arr_7 [24] ;
unsigned char arr_8 [24] ;
int arr_18 [16] ;
short arr_9 [24] [24] [24] ;
int arr_12 [10] ;
_Bool arr_16 [20] ;
int arr_19 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)28536;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 484750406U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (short)11082;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -9067536384978168283LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -819774516;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-14023;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 21145148;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = -287957075;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
