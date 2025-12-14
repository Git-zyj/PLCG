#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -98928982;
int var_3 = -1684464369;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)19756;
unsigned int var_7 = 365272665U;
short var_9 = (short)7851;
unsigned short var_10 = (unsigned short)11352;
int zero = 0;
int var_12 = -20884145;
unsigned int var_13 = 2333123007U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 12885955944456357530ULL;
signed char var_16 = (signed char)-20;
int var_17 = -1643610706;
short var_18 = (short)-13398;
int var_19 = -1587675604;
unsigned short var_20 = (unsigned short)17084;
unsigned short arr_2 [18] ;
short arr_8 [18] [18] [18] [18] ;
int arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)28620;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-8937;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -1310486160;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
