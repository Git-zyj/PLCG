#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 613815081;
long long int var_1 = 6538679606607052500LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 4083583627U;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-95;
unsigned int var_9 = 3436225716U;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
unsigned long long int var_11 = 13214296997908983405ULL;
short var_12 = (short)-24187;
unsigned short var_13 = (unsigned short)57030;
long long int var_14 = -9050733614114493581LL;
unsigned long long int var_15 = 14601406235660438147ULL;
unsigned char var_16 = (unsigned char)186;
signed char var_17 = (signed char)-21;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)7;
_Bool arr_0 [18] [18] ;
long long int arr_1 [18] ;
unsigned char arr_4 [14] ;
unsigned int arr_6 [14] ;
_Bool arr_7 [14] ;
_Bool arr_8 [14] ;
long long int arr_9 [14] [14] [14] [14] ;
unsigned short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4424828421078274577LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 2235854585U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -2451336052421781826LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)49328;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
