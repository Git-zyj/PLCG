#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23651;
unsigned int var_3 = 3756513295U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)17397;
_Bool var_6 = (_Bool)0;
int var_8 = -1190788491;
unsigned int var_9 = 3731328045U;
int zero = 0;
int var_10 = -1812088081;
int var_11 = 765458514;
int var_12 = 1633412497;
unsigned char var_13 = (unsigned char)188;
unsigned long long int var_14 = 4108124896283245466ULL;
signed char arr_1 [14] [14] ;
signed char arr_2 [14] ;
unsigned int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1912581856U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
