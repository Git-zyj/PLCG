#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2070068783;
int var_1 = -1263583194;
long long int var_2 = 6770839913571932631LL;
unsigned long long int var_5 = 5474599048930108658ULL;
int var_6 = -2094635098;
signed char var_7 = (signed char)50;
unsigned int var_9 = 643830694U;
long long int var_12 = -8479340923368766009LL;
int zero = 0;
short var_13 = (short)435;
long long int var_14 = 7086249421539461850LL;
int var_15 = 587237796;
int var_16 = 2026821954;
long long int var_17 = 2933715720818768430LL;
short var_18 = (short)3920;
int var_19 = -304794680;
unsigned short arr_0 [18] ;
short arr_3 [22] [22] ;
long long int arr_4 [22] [22] ;
int arr_7 [20] ;
long long int arr_11 [23] ;
long long int arr_2 [18] ;
unsigned long long int arr_5 [22] ;
long long int arr_6 [22] ;
int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)46222;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)13564;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -5776717967070159508LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 776959940 : -139080648;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1982307931738854024LL : -4386333086693896010LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5232728895663949610LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 2357005844613733802ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -5365950231359984732LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -43715084 : 256248446;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
