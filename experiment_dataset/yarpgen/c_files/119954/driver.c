#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30435;
long long int var_2 = 5139142198197725890LL;
unsigned int var_5 = 3208599264U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 398955789432996822ULL;
unsigned char var_8 = (unsigned char)202;
unsigned int var_9 = 3890684174U;
short var_10 = (short)-22766;
unsigned short var_11 = (unsigned short)26696;
int zero = 0;
unsigned short var_12 = (unsigned short)51739;
unsigned int var_13 = 3289879842U;
long long int var_14 = -3764165956003819619LL;
unsigned int var_15 = 3578510682U;
short var_16 = (short)-21184;
short var_17 = (short)12279;
unsigned long long int var_18 = 2713092887011172606ULL;
unsigned char var_19 = (unsigned char)233;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3912471931264782217LL;
long long int var_22 = -4953228738894439439LL;
unsigned char var_23 = (unsigned char)171;
unsigned short var_24 = (unsigned short)35308;
unsigned int arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
unsigned int arr_4 [14] [14] [14] ;
long long int arr_5 [14] ;
unsigned int arr_8 [10] ;
_Bool arr_10 [10] [10] ;
unsigned int arr_15 [10] [10] [10] [10] ;
signed char arr_16 [23] ;
long long int arr_17 [23] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 4000905200U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)2066;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 2578038474763348668ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1094868284U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -2995333061605776470LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 3548347765U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 4287905283U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = -7084807347841779498LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 9002641896775946538LL;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
