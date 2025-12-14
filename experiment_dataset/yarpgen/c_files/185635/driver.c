#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2552790640U;
short var_4 = (short)9298;
unsigned long long int var_6 = 3215587285123061914ULL;
unsigned char var_7 = (unsigned char)153;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 886175865U;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)131;
unsigned long long int var_14 = 7628648279269294705ULL;
unsigned char var_15 = (unsigned char)82;
int var_16 = -857907355;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3308889255U;
unsigned int var_19 = 3303985867U;
short arr_0 [16] ;
int arr_2 [16] ;
unsigned int arr_3 [16] [16] [16] ;
_Bool arr_4 [16] [16] [16] ;
unsigned char arr_7 [18] ;
int arr_8 [18] ;
unsigned int arr_9 [18] [18] ;
unsigned char arr_14 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-16428;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 714170495;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3540358479U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1559433340 : -847614143;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 525781673U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)76;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
