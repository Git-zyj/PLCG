#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
_Bool var_1 = (_Bool)0;
int var_3 = 982471189;
unsigned char var_4 = (unsigned char)31;
unsigned char var_11 = (unsigned char)162;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)27028;
signed char var_15 = (signed char)-6;
unsigned char var_16 = (unsigned char)26;
short var_17 = (short)2076;
unsigned int var_18 = 3251344039U;
unsigned char var_19 = (unsigned char)78;
_Bool var_20 = (_Bool)1;
long long int arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
unsigned int arr_4 [20] [20] ;
_Bool arr_2 [19] ;
_Bool arr_7 [20] [20] ;
unsigned long long int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -3174248853941487470LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 52518415U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 7018112298834926555ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
