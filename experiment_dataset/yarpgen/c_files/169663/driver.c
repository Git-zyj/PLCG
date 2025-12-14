#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3905492929558421162ULL;
unsigned long long int var_1 = 18147274110487354524ULL;
unsigned int var_2 = 2144451742U;
unsigned short var_3 = (unsigned short)56788;
unsigned char var_8 = (unsigned char)162;
int zero = 0;
unsigned char var_10 = (unsigned char)168;
long long int var_11 = -2595532485087185074LL;
unsigned long long int var_12 = 5265353597828858843ULL;
unsigned char var_13 = (unsigned char)63;
unsigned short var_14 = (unsigned short)59244;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 17807467308893064481ULL;
unsigned int var_17 = 666007454U;
unsigned long long int var_18 = 4651318935522813383ULL;
short arr_0 [16] [16] ;
short arr_1 [16] ;
short arr_2 [16] [16] ;
unsigned char arr_3 [16] [16] ;
unsigned char arr_9 [18] ;
unsigned char arr_13 [18] [18] [18] ;
short arr_16 [18] ;
signed char arr_22 [20] ;
unsigned int arr_23 [20] ;
signed char arr_24 [20] ;
int arr_5 [16] [16] ;
signed char arr_6 [16] [16] [16] ;
signed char arr_20 [18] [18] [18] ;
unsigned int arr_21 [18] [18] ;
unsigned int arr_26 [20] ;
signed char arr_27 [20] ;
short arr_28 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-32021;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-31646;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)5439;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (short)-28480;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = 2492303531U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1845726311;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)123 : (signed char)20;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = 2562654816U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = 2283608223U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (short)10241;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
