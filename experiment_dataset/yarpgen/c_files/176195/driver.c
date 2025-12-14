#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)183;
int var_4 = -91913218;
unsigned short var_5 = (unsigned short)31265;
short var_8 = (short)-31541;
int var_9 = 1467852757;
short var_11 = (short)-20115;
unsigned long long int var_12 = 4513217710508274433ULL;
int var_13 = 203101970;
signed char var_15 = (signed char)-28;
signed char var_19 = (signed char)-94;
int zero = 0;
short var_20 = (short)10960;
signed char var_21 = (signed char)76;
unsigned int var_22 = 389729779U;
signed char var_23 = (signed char)-53;
unsigned char var_24 = (unsigned char)29;
int var_25 = -274064192;
signed char var_26 = (signed char)-99;
long long int var_27 = -2425759197303361899LL;
unsigned short var_28 = (unsigned short)51148;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)44;
unsigned long long int var_31 = 7051663603979052720ULL;
signed char var_32 = (signed char)74;
unsigned short var_33 = (unsigned short)56856;
_Bool arr_0 [23] ;
long long int arr_1 [23] ;
signed char arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
unsigned char arr_5 [16] [16] ;
short arr_8 [10] ;
signed char arr_9 [10] [10] ;
short arr_10 [10] ;
int arr_12 [10] [10] [10] ;
unsigned char arr_2 [23] ;
unsigned char arr_7 [16] ;
signed char arr_21 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -776546301365859055LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 4528640005607057950ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (short)-28293;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (short)7873;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1970624769;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (signed char)41;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
