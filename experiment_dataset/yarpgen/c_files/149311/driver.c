#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)80;
unsigned int var_7 = 3176876272U;
long long int var_8 = 5163614634855595091LL;
long long int var_10 = 285856642277544646LL;
long long int var_12 = -6575497593374125547LL;
unsigned char var_13 = (unsigned char)202;
int zero = 0;
unsigned int var_16 = 990815373U;
unsigned long long int var_17 = 15969181938405383552ULL;
short var_18 = (short)30953;
unsigned char var_19 = (unsigned char)201;
int var_20 = 761481611;
signed char var_21 = (signed char)2;
int arr_0 [23] [23] ;
_Bool arr_2 [23] [23] ;
long long int arr_4 [24] ;
unsigned int arr_7 [24] [24] ;
unsigned long long int arr_3 [23] ;
short arr_8 [24] ;
int arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -732583453 : 1352310939;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -979189125041258895LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 3608322437U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2556321966759629771ULL : 951271896942585272ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (short)29967;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -1597601140;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
