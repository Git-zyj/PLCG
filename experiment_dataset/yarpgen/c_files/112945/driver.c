#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-61;
int var_3 = 1965522015;
short var_4 = (short)-29153;
int var_5 = 469215018;
signed char var_6 = (signed char)-38;
unsigned int var_7 = 2247126448U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 970849776U;
signed char var_13 = (signed char)31;
unsigned char var_14 = (unsigned char)181;
int zero = 0;
short var_15 = (short)-3986;
int var_16 = -59705747;
unsigned int var_17 = 690443772U;
int var_18 = -325525713;
unsigned long long int var_19 = 12314112933861906189ULL;
unsigned short var_20 = (unsigned short)43793;
int arr_2 [10] [10] ;
unsigned char arr_3 [10] ;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -91564654;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)139 : (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1521510872019631544ULL : 11720333300551685526ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
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
