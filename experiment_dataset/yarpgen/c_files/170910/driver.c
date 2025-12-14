#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39005;
signed char var_2 = (signed char)-112;
long long int var_4 = 669608669246929557LL;
unsigned short var_5 = (unsigned short)22256;
signed char var_8 = (signed char)12;
short var_9 = (short)-12446;
long long int var_10 = -1910071433347977221LL;
int zero = 0;
int var_12 = -1567405166;
unsigned short var_13 = (unsigned short)57049;
signed char var_14 = (signed char)-108;
unsigned short var_15 = (unsigned short)19667;
int var_16 = -678106489;
long long int var_17 = -6700874610858876096LL;
unsigned long long int var_18 = 5984321968668029102ULL;
short var_19 = (short)-2076;
unsigned char var_20 = (unsigned char)233;
long long int var_21 = 4910990175887360278LL;
short arr_1 [24] [24] ;
_Bool arr_2 [25] ;
signed char arr_4 [25] ;
_Bool arr_8 [23] ;
unsigned int arr_12 [15] [15] ;
unsigned int arr_6 [25] ;
unsigned short arr_7 [25] ;
unsigned int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)17657;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = 1564870356U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 3489073298U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)14054;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 4147720362U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
