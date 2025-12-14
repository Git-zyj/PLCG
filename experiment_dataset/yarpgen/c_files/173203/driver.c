#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1348462988722439901LL;
long long int var_8 = 7812059721626168550LL;
unsigned char var_9 = (unsigned char)18;
short var_10 = (short)1654;
unsigned long long int var_11 = 8191739250301608287ULL;
int zero = 0;
unsigned long long int var_14 = 707740848374183665ULL;
long long int var_15 = -7974291136223125304LL;
signed char var_16 = (signed char)94;
unsigned short var_17 = (unsigned short)41778;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)18;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] [25] ;
unsigned int arr_3 [25] ;
unsigned char arr_5 [25] ;
int arr_6 [25] [25] ;
int arr_8 [25] ;
signed char arr_2 [25] [25] ;
signed char arr_7 [25] [25] ;
unsigned long long int arr_11 [25] [25] [25] ;
signed char arr_12 [25] ;
signed char arr_16 [19] ;
signed char arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 11586562296699503314ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4236104147U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)191 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -713853291 : 1301900368;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 1634025936;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)52 : (signed char)-87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 8605697745281301779ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (signed char)68;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
