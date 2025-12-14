#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8368;
signed char var_1 = (signed char)11;
int var_4 = -1461103009;
long long int var_7 = 6012969214949426007LL;
long long int var_8 = 3743082085832665787LL;
unsigned short var_10 = (unsigned short)1131;
unsigned int var_11 = 1260500782U;
short var_12 = (short)7564;
signed char var_13 = (signed char)7;
short var_14 = (short)-8532;
int zero = 0;
signed char var_15 = (signed char)40;
unsigned char var_16 = (unsigned char)91;
unsigned int var_17 = 1190056190U;
unsigned short var_18 = (unsigned short)7235;
long long int var_19 = -8607275168511167697LL;
signed char var_20 = (signed char)-5;
signed char arr_0 [12] ;
signed char arr_1 [12] ;
unsigned short arr_2 [12] [12] [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
_Bool arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)22444;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 5531833157328457197ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
