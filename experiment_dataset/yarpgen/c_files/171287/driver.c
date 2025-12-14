#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15982213647228768279ULL;
signed char var_2 = (signed char)119;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)138;
signed char var_5 = (signed char)61;
int var_6 = -1983451220;
short var_7 = (short)11566;
int var_8 = -1238090606;
signed char var_10 = (signed char)109;
long long int var_11 = -3309042565297738239LL;
short var_12 = (short)-7452;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 796383880U;
unsigned long long int var_19 = 5724387263026876008ULL;
signed char var_20 = (signed char)99;
short var_21 = (short)-29680;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)56318;
unsigned short var_24 = (unsigned short)28529;
short arr_2 [14] [14] ;
unsigned long long int arr_4 [24] ;
_Bool arr_3 [14] [14] ;
unsigned short arr_6 [24] [24] ;
_Bool arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-24433;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2102972649718902407ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)21716;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
