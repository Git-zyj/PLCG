#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -742870706;
signed char var_3 = (signed char)0;
int var_5 = -1909451034;
unsigned short var_8 = (unsigned short)48985;
unsigned long long int var_9 = 1715328163204854405ULL;
int var_10 = -879716475;
_Bool var_13 = (_Bool)1;
unsigned long long int var_17 = 1962366192692252106ULL;
short var_19 = (short)-12926;
int zero = 0;
signed char var_20 = (signed char)61;
unsigned char var_21 = (unsigned char)188;
unsigned int var_22 = 2788460720U;
unsigned char var_23 = (unsigned char)179;
signed char var_24 = (signed char)30;
short var_25 = (short)-22619;
unsigned long long int arr_0 [23] [23] ;
signed char arr_6 [23] ;
unsigned int arr_8 [23] [23] [23] ;
unsigned int arr_9 [23] [23] [23] [23] ;
int arr_12 [23] ;
short arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 6004719521230344846ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1859291349U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1347040939U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -32723614;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (short)-2233;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
