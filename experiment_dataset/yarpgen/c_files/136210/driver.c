#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-21683;
short var_8 = (short)24959;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)29896;
unsigned char var_14 = (unsigned char)46;
int zero = 0;
signed char var_17 = (signed char)-91;
signed char var_18 = (signed char)-91;
short var_19 = (short)-21046;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)89;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)173;
unsigned int var_24 = 3515144661U;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
_Bool arr_0 [18] ;
_Bool arr_1 [18] ;
unsigned char arr_2 [10] ;
unsigned char arr_4 [10] ;
unsigned int arr_5 [10] ;
int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2616101763U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 1092200964;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
