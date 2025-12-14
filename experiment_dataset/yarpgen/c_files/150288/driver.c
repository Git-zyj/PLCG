#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
long long int var_1 = 5865418165471321501LL;
unsigned char var_2 = (unsigned char)216;
long long int var_4 = 3613134181223780478LL;
unsigned char var_5 = (unsigned char)114;
short var_6 = (short)21697;
short var_7 = (short)28332;
unsigned long long int var_9 = 447793007084303229ULL;
int zero = 0;
unsigned long long int var_10 = 10417812684139031129ULL;
unsigned char var_11 = (unsigned char)244;
unsigned char var_12 = (unsigned char)112;
short arr_1 [14] [14] ;
unsigned int arr_7 [14] ;
_Bool arr_8 [14] [14] ;
long long int arr_2 [14] ;
signed char arr_3 [14] ;
long long int arr_11 [14] ;
long long int arr_12 [14] ;
unsigned short arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)18192 : (short)-5794;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 3977961645U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2266384993712732194LL : -3869298575980915265LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)42 : (signed char)89;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -8556778917271857771LL : -4204092596313243729LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2329279980991573212LL : -5777430928823651454LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)170 : (unsigned short)30678;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
