#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7952057387273208973ULL;
unsigned char var_4 = (unsigned char)126;
unsigned char var_6 = (unsigned char)33;
unsigned short var_8 = (unsigned short)26801;
long long int var_11 = -2524540747841815500LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)114;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15529292167811482643ULL;
long long int var_19 = -7565382538287533641LL;
unsigned char var_20 = (unsigned char)253;
int var_21 = 1787275852;
unsigned long long int var_22 = 18297812072151795685ULL;
long long int arr_1 [15] ;
int arr_9 [18] [18] ;
unsigned short arr_10 [18] [18] [18] ;
_Bool arr_11 [18] ;
long long int arr_13 [18] [18] [18] [18] ;
_Bool arr_14 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 6730583405217837441LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = -1935326156;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)37851;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -7755857911395644857LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
