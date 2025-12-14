#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-52;
unsigned int var_2 = 789257726U;
long long int var_3 = -7303844909504004529LL;
unsigned short var_4 = (unsigned short)31876;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 14270409075530474276ULL;
signed char var_8 = (signed char)-98;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)7;
int var_14 = 818760928;
int zero = 0;
int var_15 = -315263866;
unsigned int var_16 = 3986826733U;
unsigned int var_17 = 4193005304U;
unsigned long long int var_18 = 18041239875056129063ULL;
long long int var_19 = 441467032078559960LL;
int var_20 = 425409920;
unsigned char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
_Bool arr_2 [24] [24] ;
_Bool arr_4 [14] ;
int arr_5 [14] ;
signed char arr_3 [24] [24] ;
unsigned long long int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3145408097643219046ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 792467926;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 12155103803784313530ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
