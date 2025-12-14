#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned int var_1 = 900879138U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)208;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3815010900U;
_Bool var_9 = (_Bool)1;
long long int var_11 = 2935538863863355202LL;
unsigned int var_12 = 2775099252U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)57624;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2165873157U;
short var_17 = (short)-27906;
unsigned char var_18 = (unsigned char)34;
signed char var_19 = (signed char)49;
unsigned char var_20 = (unsigned char)141;
unsigned int var_21 = 2463396387U;
unsigned int arr_0 [12] ;
short arr_1 [12] ;
unsigned char arr_4 [25] ;
unsigned char arr_5 [25] ;
_Bool arr_6 [25] ;
unsigned char arr_2 [12] ;
unsigned int arr_3 [12] [12] ;
unsigned char arr_7 [25] ;
unsigned long long int arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 570469910U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-13721;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)111 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 4069910972U : 3544545035U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 2444045859202037087ULL : 9096616869904950094ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
