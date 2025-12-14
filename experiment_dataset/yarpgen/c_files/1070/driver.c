#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1683272983U;
long long int var_7 = -2476082712572335283LL;
unsigned short var_8 = (unsigned short)4145;
long long int var_9 = -3845643684154757060LL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)62773;
unsigned int var_15 = 4129889335U;
unsigned int var_16 = 3706483356U;
int zero = 0;
unsigned short var_17 = (unsigned short)35628;
long long int var_18 = 7928698230475779819LL;
long long int var_19 = 561451171748549287LL;
long long int arr_0 [23] ;
unsigned short arr_1 [23] ;
short arr_2 [23] ;
unsigned char arr_3 [23] ;
signed char arr_4 [23] ;
unsigned char arr_5 [23] ;
int arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4521874186015341733LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59689 : (unsigned short)57028;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-3657;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)46 : (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1090365086 : -913931003;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
