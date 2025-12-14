#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1921344838;
int var_3 = 1933864806;
short var_4 = (short)-12759;
unsigned long long int var_5 = 11636006337691591673ULL;
long long int var_7 = -1385415690021013279LL;
unsigned short var_8 = (unsigned short)35943;
unsigned int var_10 = 760210802U;
int var_11 = -47352988;
signed char var_12 = (signed char)-127;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -3472187971071857771LL;
unsigned char var_15 = (unsigned char)87;
_Bool var_16 = (_Bool)1;
int var_17 = 874168597;
long long int arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
unsigned long long int arr_4 [23] [23] ;
unsigned short arr_5 [23] ;
short arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 8598970065199051856LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 4691695286325403300ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)26817;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 17887334863480769030ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)46683;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)31649;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)177;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
