#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
int var_2 = 855526800;
unsigned short var_3 = (unsigned short)35437;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)92;
unsigned char var_8 = (unsigned char)75;
signed char var_9 = (signed char)-25;
int var_10 = 1362031684;
unsigned char var_11 = (unsigned char)193;
short var_12 = (short)-7738;
int zero = 0;
signed char var_13 = (signed char)102;
unsigned short var_14 = (unsigned short)40537;
unsigned long long int var_15 = 6078574918490581184ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 586910787U;
unsigned char var_18 = (unsigned char)226;
unsigned char var_19 = (unsigned char)50;
unsigned char var_20 = (unsigned char)153;
unsigned long long int var_21 = 2710841940068058771ULL;
short arr_0 [15] ;
short arr_3 [18] ;
short arr_5 [18] [18] ;
short arr_7 [22] ;
short arr_8 [22] ;
signed char arr_6 [18] [18] ;
signed char arr_9 [22] ;
int arr_10 [22] ;
long long int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-21672;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)3411;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (short)7062;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)-21130;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)-23788;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 333244896;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -8525548760519229980LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
