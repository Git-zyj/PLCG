#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16800;
long long int var_2 = -1662646923997257093LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 17540010831232640810ULL;
short var_7 = (short)-5399;
unsigned char var_10 = (unsigned char)12;
signed char var_11 = (signed char)40;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_17 = -4938102978183516463LL;
unsigned short var_18 = (unsigned short)59769;
unsigned long long int var_19 = 9891165057499269864ULL;
signed char var_20 = (signed char)22;
unsigned short var_21 = (unsigned short)57254;
unsigned char var_22 = (unsigned char)131;
unsigned int var_23 = 1527104359U;
unsigned char var_24 = (unsigned char)66;
unsigned char arr_0 [11] ;
unsigned int arr_1 [11] ;
short arr_2 [11] ;
short arr_3 [11] [11] [11] ;
unsigned int arr_4 [11] [11] [11] ;
int arr_5 [11] [11] ;
short arr_6 [11] ;
unsigned long long int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 955446125U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)3511;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-23447;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2322175871U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 179536027;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)13739;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 7723446007180625095ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
