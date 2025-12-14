#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5399295683126985580LL;
long long int var_1 = -6643740606640476527LL;
unsigned char var_7 = (unsigned char)70;
long long int var_8 = 2377445754793024152LL;
unsigned char var_9 = (unsigned char)53;
unsigned char var_10 = (unsigned char)97;
unsigned short var_15 = (unsigned short)24716;
long long int var_18 = -2454354489563438119LL;
int zero = 0;
short var_19 = (short)-26777;
short var_20 = (short)18233;
int var_21 = -1497607461;
long long int var_22 = -8499432766398099201LL;
short var_23 = (short)-19816;
unsigned char var_24 = (unsigned char)117;
_Bool arr_0 [10] ;
long long int arr_8 [13] ;
short arr_2 [10] [10] ;
unsigned char arr_3 [10] ;
signed char arr_6 [10] ;
unsigned char arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -6631261704108706257LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)12831;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)171;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
