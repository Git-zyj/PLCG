#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32160;
int var_1 = -1980345527;
signed char var_2 = (signed char)-81;
short var_3 = (short)-24154;
unsigned long long int var_4 = 8870943151442544025ULL;
int var_5 = 1358890748;
short var_7 = (short)-2876;
unsigned short var_8 = (unsigned short)41604;
int zero = 0;
unsigned long long int var_10 = 2770891366982325357ULL;
signed char var_11 = (signed char)-102;
unsigned short var_12 = (unsigned short)22156;
unsigned long long int var_13 = 17388654260748796296ULL;
int var_14 = 1813104877;
unsigned int var_15 = 1001369007U;
unsigned int var_16 = 946030999U;
unsigned int var_17 = 3152118080U;
int arr_0 [20] [20] ;
_Bool arr_1 [20] ;
signed char arr_2 [20] ;
int arr_3 [20] ;
unsigned long long int arr_4 [22] ;
signed char arr_5 [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -1245623839;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 733030200;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 12542205046486072670ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-39 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 571426195253873489ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
