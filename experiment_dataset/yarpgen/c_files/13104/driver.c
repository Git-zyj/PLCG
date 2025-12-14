#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4163472297909481591LL;
unsigned char var_2 = (unsigned char)225;
unsigned short var_3 = (unsigned short)11360;
unsigned short var_6 = (unsigned short)30899;
long long int var_7 = 7018687439866239293LL;
unsigned long long int var_8 = 17031019947912709301ULL;
unsigned char var_9 = (unsigned char)160;
signed char var_11 = (signed char)-81;
unsigned int var_12 = 1241882541U;
signed char var_13 = (signed char)-60;
unsigned long long int var_15 = 2631494703778210662ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)68;
unsigned long long int var_19 = 14418304823956886802ULL;
unsigned short var_20 = (unsigned short)11589;
unsigned short var_21 = (unsigned short)20175;
unsigned char var_22 = (unsigned char)128;
unsigned short var_23 = (unsigned short)28250;
_Bool var_24 = (_Bool)0;
signed char arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
long long int arr_4 [15] ;
long long int arr_5 [15] ;
unsigned int arr_7 [15] ;
unsigned char arr_8 [15] [15] [15] ;
unsigned int arr_2 [13] ;
unsigned short arr_9 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)8399;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 5530378245274819240LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 7241952787262074742LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2564005143U : 2125684212U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)173 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1589002443U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)41063 : (unsigned short)65108;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
