#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)13540;
unsigned short var_2 = (unsigned short)44061;
unsigned char var_3 = (unsigned char)64;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-29668;
unsigned char var_7 = (unsigned char)26;
signed char var_8 = (signed char)74;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-12865;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)35;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3025900917U;
int var_18 = 245348122;
int var_19 = -1128890130;
unsigned int var_20 = 454032108U;
unsigned char var_21 = (unsigned char)140;
unsigned short var_22 = (unsigned short)54050;
unsigned int var_23 = 1801653974U;
short arr_0 [22] ;
unsigned int arr_1 [22] ;
_Bool arr_2 [22] ;
int arr_3 [22] [22] ;
unsigned char arr_5 [22] [22] [22] ;
unsigned char arr_6 [22] [22] [22] ;
int arr_7 [22] [22] [22] ;
signed char arr_8 [22] [22] [22] ;
long long int arr_9 [22] [22] ;
_Bool arr_11 [22] [22] ;
unsigned char arr_16 [11] [11] ;
unsigned char arr_4 [22] ;
unsigned char arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)13825;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1095695849U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 2019367946;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)12 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -717137396;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = -2865914324269962593LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (unsigned char)192;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
