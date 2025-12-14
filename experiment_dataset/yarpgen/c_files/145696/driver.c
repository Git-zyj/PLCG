#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18149148727029911153ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 16141280760441942614ULL;
int zero = 0;
long long int var_15 = -4421893341804943428LL;
long long int var_16 = 5323473232697587045LL;
unsigned long long int var_17 = 17927060324610179217ULL;
unsigned int var_18 = 2462416765U;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)18234;
unsigned long long int var_21 = 14075288570867272660ULL;
short var_22 = (short)5774;
unsigned long long int var_23 = 649577218652685309ULL;
unsigned short var_24 = (unsigned short)10856;
long long int arr_0 [21] [21] ;
short arr_1 [21] ;
unsigned int arr_4 [21] [21] [21] ;
signed char arr_5 [21] [21] [21] ;
_Bool arr_6 [21] [21] ;
unsigned int arr_7 [16] ;
unsigned int arr_16 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 6636340978706694617LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-18578;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 349407937U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 3664191985U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = 442609036U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
