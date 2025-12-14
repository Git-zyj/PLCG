#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 3377260258U;
unsigned long long int var_6 = 6595559203895497347ULL;
int var_8 = 802247565;
int var_9 = -1888140922;
unsigned short var_10 = (unsigned short)30817;
int zero = 0;
short var_11 = (short)-7945;
unsigned short var_12 = (unsigned short)11890;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)26;
unsigned short var_16 = (unsigned short)35938;
unsigned long long int var_17 = 13670111201328929538ULL;
signed char arr_0 [10] [10] ;
_Bool arr_5 [20] [20] ;
unsigned long long int arr_8 [20] ;
signed char arr_3 [10] ;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1506612164898049123ULL : 8329717563515974288ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 9463897269939304076ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
