#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3151119546U;
long long int var_1 = 8457953624154723895LL;
unsigned int var_3 = 588897595U;
unsigned int var_4 = 3313139611U;
unsigned char var_5 = (unsigned char)221;
unsigned char var_11 = (unsigned char)27;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3646077174U;
unsigned int var_15 = 2956171739U;
long long int var_16 = -3197143447666105627LL;
unsigned short var_17 = (unsigned short)29586;
int var_18 = 1035463221;
long long int var_19 = 7722685635140178190LL;
_Bool arr_0 [10] [10] ;
unsigned char arr_6 [18] [18] ;
int arr_7 [18] ;
unsigned char arr_2 [10] ;
long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)4 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2088657060;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -5781411467638173967LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
