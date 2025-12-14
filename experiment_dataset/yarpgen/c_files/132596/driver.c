#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4308485765323070433ULL;
short var_1 = (short)-25105;
unsigned int var_2 = 2969351671U;
unsigned int var_3 = 4223359349U;
unsigned int var_5 = 4065762470U;
int var_6 = -1301749079;
unsigned long long int var_7 = 8874716124761462151ULL;
long long int var_9 = 2663712271717292993LL;
unsigned char var_10 = (unsigned char)106;
int zero = 0;
signed char var_11 = (signed char)42;
unsigned int var_12 = 22988885U;
unsigned long long int var_13 = 13878746425030025488ULL;
unsigned short var_14 = (unsigned short)55647;
unsigned short var_15 = (unsigned short)14235;
unsigned int var_16 = 3703476810U;
short var_17 = (short)-21680;
unsigned int var_18 = 1199985001U;
unsigned long long int var_19 = 10864429511485332247ULL;
unsigned short arr_1 [13] [13] ;
long long int arr_2 [13] [13] ;
signed char arr_4 [13] [13] [13] ;
_Bool arr_7 [13] [13] ;
signed char arr_10 [13] [13] ;
signed char arr_13 [13] [13] ;
unsigned long long int arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42770;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -954103973422896019LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 15493755989006384711ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
