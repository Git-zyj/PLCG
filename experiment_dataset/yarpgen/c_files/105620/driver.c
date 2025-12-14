#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
long long int var_1 = -4076063397128323929LL;
unsigned char var_2 = (unsigned char)214;
unsigned short var_3 = (unsigned short)55348;
unsigned int var_4 = 3576002581U;
unsigned short var_5 = (unsigned short)58711;
short var_7 = (short)12216;
short var_8 = (short)17134;
int zero = 0;
signed char var_10 = (signed char)-33;
signed char var_11 = (signed char)-121;
long long int var_12 = 2424105147174348638LL;
unsigned long long int var_13 = 4884770800467936458ULL;
unsigned int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
long long int arr_3 [23] ;
unsigned short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1355174858U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 16095770099585759184ULL : 949762021100152451ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7543039837468023448LL : -9222436287491530554LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60689 : (unsigned short)2952;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
