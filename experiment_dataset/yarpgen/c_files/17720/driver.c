#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
signed char var_1 = (signed char)104;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-21221;
long long int var_8 = -3784979642026489365LL;
unsigned long long int var_10 = 13138007559986369595ULL;
int zero = 0;
unsigned long long int var_11 = 17706733296956732626ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7872032333850746494LL;
unsigned long long int var_14 = 14688656518147386739ULL;
signed char var_15 = (signed char)30;
signed char var_16 = (signed char)102;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_1 [16] [16] ;
unsigned long long int arr_2 [16] ;
unsigned char arr_3 [16] ;
long long int arr_6 [24] ;
unsigned long long int arr_7 [24] ;
_Bool arr_4 [16] [16] [16] ;
signed char arr_5 [16] ;
signed char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 16686691140876916747ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 7234946460764327580ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 3109535567806437900LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1517302755866110778ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)61;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
