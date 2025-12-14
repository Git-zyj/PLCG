#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28936;
signed char var_1 = (signed char)8;
unsigned long long int var_2 = 9541631285100747706ULL;
int var_8 = 210268678;
long long int var_11 = -4849104839747288259LL;
unsigned short var_12 = (unsigned short)44346;
unsigned short var_15 = (unsigned short)31278;
int var_16 = -2113879948;
int zero = 0;
signed char var_18 = (signed char)63;
unsigned int var_19 = 1225247217U;
unsigned char var_20 = (unsigned char)211;
unsigned char var_21 = (unsigned char)210;
unsigned long long int var_22 = 10712128992742292164ULL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)115;
unsigned short var_25 = (unsigned short)164;
unsigned long long int var_26 = 16100934039071501766ULL;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 3148716096U;
short arr_0 [25] [25] ;
_Bool arr_1 [25] [25] ;
unsigned long long int arr_2 [25] ;
signed char arr_3 [25] ;
unsigned int arr_6 [25] [25] ;
_Bool arr_9 [23] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-6659;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 11969907242153402892ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 2270873768U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)19081;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
