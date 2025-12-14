#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7321774919729603926ULL;
long long int var_4 = -5669861130309089792LL;
unsigned char var_6 = (unsigned char)223;
unsigned int var_7 = 2899288695U;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)237;
long long int var_11 = -5931792098173065506LL;
short var_14 = (short)9932;
long long int var_16 = -3029394568390727040LL;
int zero = 0;
unsigned short var_18 = (unsigned short)44878;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3827189498748544791LL;
unsigned short var_21 = (unsigned short)60628;
unsigned char arr_0 [11] ;
short arr_4 [11] [11] ;
long long int arr_5 [11] ;
unsigned int arr_6 [11] ;
signed char arr_7 [11] [11] [11] ;
unsigned char arr_8 [11] [11] ;
short arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)22568;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 3084082833680546563LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1175644339U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (short)-239;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
