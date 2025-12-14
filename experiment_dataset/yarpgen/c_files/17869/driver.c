#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3536271632U;
signed char var_11 = (signed char)89;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-20;
short var_16 = (short)839;
long long int var_18 = -3113008120127764410LL;
int zero = 0;
int var_19 = -1493643969;
unsigned char var_20 = (unsigned char)59;
_Bool var_21 = (_Bool)0;
long long int arr_0 [19] ;
unsigned int arr_2 [19] ;
short arr_3 [19] ;
short arr_4 [19] [19] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1587631464195581765LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 797086109U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-20740 : (short)-22529;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-1466;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)100 : (unsigned char)85;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
