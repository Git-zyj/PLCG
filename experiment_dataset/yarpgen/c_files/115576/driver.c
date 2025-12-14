#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
signed char var_1 = (signed char)-54;
unsigned long long int var_3 = 8650344716267040426ULL;
unsigned long long int var_5 = 596372849378158005ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)80;
unsigned char var_10 = (unsigned char)11;
long long int var_13 = -3384073874691347212LL;
unsigned int var_14 = 3834501020U;
unsigned char var_15 = (unsigned char)127;
short var_16 = (short)16732;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-38;
long long int var_20 = 6542060185975512333LL;
unsigned int var_21 = 773909677U;
unsigned short var_22 = (unsigned short)24769;
long long int var_23 = -8412300296660950425LL;
unsigned long long int var_24 = 13792770848060432111ULL;
unsigned short var_25 = (unsigned short)18490;
unsigned short arr_0 [13] ;
_Bool arr_1 [13] [13] ;
unsigned int arr_4 [23] ;
unsigned long long int arr_5 [23] ;
signed char arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned int arr_6 [23] [23] ;
short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)58201;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1211971155U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 14649330758782272780ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 1606143621U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-1534;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
