#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 844474837U;
unsigned long long int var_4 = 4039692143672530637ULL;
short var_5 = (short)-21504;
long long int var_6 = 2760887914616543969LL;
short var_7 = (short)-23181;
unsigned long long int var_10 = 11342014839788640754ULL;
signed char var_11 = (signed char)-36;
int zero = 0;
unsigned int var_19 = 2923058173U;
int var_20 = 74098163;
long long int var_21 = -7353908511532940489LL;
unsigned int var_22 = 2946909101U;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)20;
long long int var_25 = 7945787401146320713LL;
signed char var_26 = (signed char)-40;
long long int var_27 = 3864269168444701896LL;
long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned char arr_6 [12] [12] ;
_Bool arr_7 [12] [12] ;
unsigned short arr_9 [18] [18] ;
unsigned long long int arr_10 [18] [18] ;
unsigned long long int arr_8 [12] ;
unsigned long long int arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1671401944125279856LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 9307282794914685350ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)21079;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = 15433612476752747788ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 1662057817746782933ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 4660178385993431481ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
