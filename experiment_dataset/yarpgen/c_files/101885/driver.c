#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20420;
unsigned long long int var_3 = 12970592218327926002ULL;
unsigned short var_7 = (unsigned short)3615;
unsigned int var_8 = 3289147427U;
unsigned long long int var_11 = 3963202006573381815ULL;
long long int var_14 = 220460363051829930LL;
unsigned short var_16 = (unsigned short)2750;
int zero = 0;
unsigned long long int var_18 = 6527271027770300213ULL;
int var_19 = -340575181;
unsigned short var_20 = (unsigned short)35546;
unsigned char var_21 = (unsigned char)40;
long long int arr_1 [13] [13] ;
unsigned int arr_2 [13] [13] ;
unsigned char arr_3 [13] [13] [13] ;
long long int arr_4 [13] ;
_Bool arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3934251936492022349LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 1050010860U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 3840018496394758389LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
