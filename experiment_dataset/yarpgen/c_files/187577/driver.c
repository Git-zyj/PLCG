#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4799482489536766603LL;
short var_2 = (short)13128;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2508804719U;
unsigned short var_11 = (unsigned short)28466;
unsigned int var_12 = 873643006U;
unsigned short var_13 = (unsigned short)14693;
long long int var_14 = -1179797444230688188LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 16161271396062972253ULL;
unsigned char var_17 = (unsigned char)107;
int var_18 = 1348700697;
int var_19 = 666928757;
int var_20 = 1063483930;
unsigned char var_21 = (unsigned char)42;
unsigned int var_22 = 1549867602U;
short var_23 = (short)-3226;
unsigned int var_24 = 3133990590U;
short arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned int arr_3 [13] ;
int arr_4 [13] [13] ;
signed char arr_6 [13] ;
int arr_8 [23] [23] ;
int arr_9 [23] ;
unsigned char arr_2 [15] ;
_Bool arr_5 [13] [13] ;
signed char arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)27520;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)22699;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 3304415723U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = -423366172;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -675377951;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = -113248607;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)73;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
