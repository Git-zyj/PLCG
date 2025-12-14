#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7984247415954715565ULL;
unsigned short var_2 = (unsigned short)40947;
unsigned short var_3 = (unsigned short)22284;
int var_6 = 671590004;
unsigned short var_10 = (unsigned short)15797;
unsigned short var_11 = (unsigned short)42655;
unsigned short var_12 = (unsigned short)30309;
unsigned long long int var_13 = 11028191070272010799ULL;
int zero = 0;
long long int var_14 = -6581680805815609282LL;
unsigned long long int var_15 = 3463696111724570460ULL;
signed char var_16 = (signed char)10;
short var_17 = (short)-2053;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-7324;
unsigned long long int var_20 = 7870368397762451204ULL;
signed char var_21 = (signed char)-40;
long long int var_22 = 1958264995991376365LL;
int var_23 = -1876745486;
unsigned int arr_0 [14] ;
short arr_1 [14] ;
int arr_5 [25] ;
_Bool arr_6 [25] ;
short arr_9 [23] [23] ;
unsigned short arr_4 [14] ;
_Bool arr_7 [25] ;
unsigned char arr_8 [25] ;
long long int arr_11 [23] ;
short arr_12 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2604448123U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)13635;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -1605243792;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (short)14726;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)971;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 5383868038205121559LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-16407;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
