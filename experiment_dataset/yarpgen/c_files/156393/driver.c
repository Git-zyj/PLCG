#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 15982264906227439527ULL;
unsigned char var_8 = (unsigned char)112;
int zero = 0;
unsigned short var_10 = (unsigned short)5160;
unsigned short var_11 = (unsigned short)25334;
unsigned int var_12 = 3131626621U;
long long int var_13 = -8523947624677456740LL;
unsigned int var_14 = 462547907U;
long long int var_15 = -114383984803057041LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)6518;
unsigned char var_18 = (unsigned char)246;
long long int var_19 = -1185633151404537775LL;
unsigned int arr_0 [11] [11] ;
int arr_1 [11] ;
unsigned long long int arr_6 [20] [20] ;
_Bool arr_9 [20] [20] ;
signed char arr_16 [20] [20] [20] [20] ;
unsigned char arr_4 [11] ;
unsigned int arr_15 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2004517894U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1847511076;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 254036119407983453ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-32 : (signed char)67;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = 1973594466U;
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
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
