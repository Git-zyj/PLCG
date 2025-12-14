#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2278715893004132110ULL;
unsigned char var_1 = (unsigned char)189;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 267325620U;
unsigned char var_5 = (unsigned char)207;
short var_7 = (short)-3883;
unsigned int var_8 = 1965160629U;
int var_9 = -1670870388;
unsigned long long int var_10 = 6976763611251027893ULL;
unsigned int var_14 = 357568432U;
int zero = 0;
unsigned char var_15 = (unsigned char)112;
unsigned long long int var_16 = 12605043607722074218ULL;
unsigned int var_17 = 2529588738U;
signed char var_18 = (signed char)-93;
signed char var_19 = (signed char)-9;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)234;
_Bool arr_8 [22] ;
long long int arr_12 [24] [24] ;
unsigned char arr_13 [24] ;
long long int arr_10 [22] [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] ;
unsigned long long int arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = -9049082674989478818LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -8948879289687777444LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = 145296878113021681ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
