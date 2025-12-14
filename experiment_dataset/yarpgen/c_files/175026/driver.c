#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 133559311U;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-30;
unsigned short var_6 = (unsigned short)37413;
unsigned long long int var_8 = 780696583000596786ULL;
unsigned int var_9 = 2858511325U;
signed char var_10 = (signed char)-99;
unsigned char var_11 = (unsigned char)158;
_Bool var_13 = (_Bool)1;
signed char var_17 = (signed char)-35;
unsigned int var_18 = 923753311U;
int zero = 0;
long long int var_19 = -2027029369464550284LL;
long long int var_20 = -1679851794084644639LL;
long long int var_21 = -7182854734794663026LL;
unsigned char var_22 = (unsigned char)114;
_Bool var_23 = (_Bool)0;
long long int var_24 = 2663917420679021573LL;
unsigned char var_25 = (unsigned char)107;
signed char var_26 = (signed char)-121;
short var_27 = (short)-12908;
_Bool arr_0 [24] ;
long long int arr_1 [24] [24] ;
int arr_2 [24] [24] ;
signed char arr_4 [25] ;
unsigned char arr_5 [25] ;
unsigned long long int arr_7 [14] ;
unsigned int arr_9 [14] ;
unsigned short arr_3 [24] ;
unsigned short arr_6 [25] [25] ;
unsigned char arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -4720084422766628679LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 608329943;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 15903492381332707385ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 2267866770U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)20577;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)42074;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)66;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
