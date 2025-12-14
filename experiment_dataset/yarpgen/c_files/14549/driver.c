#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3377080653725855661ULL;
long long int var_3 = 1357775175277903480LL;
unsigned long long int var_5 = 2723108701376328871ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -5831706788036582342LL;
signed char var_8 = (signed char)-81;
int zero = 0;
int var_10 = 646323706;
short var_11 = (short)-4425;
unsigned int var_12 = 4259492743U;
unsigned char var_13 = (unsigned char)199;
unsigned short var_14 = (unsigned short)26959;
long long int var_15 = -2676459295938696503LL;
unsigned short var_16 = (unsigned short)62206;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
short arr_2 [18] ;
_Bool arr_3 [18] ;
int arr_4 [18] [18] [18] ;
unsigned short arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-6440 : (short)-14960;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2078369427;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)29787 : (unsigned short)30746;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
