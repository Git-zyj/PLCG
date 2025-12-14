#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1370923201451220221LL;
unsigned int var_1 = 1693743485U;
unsigned short var_2 = (unsigned short)242;
unsigned int var_3 = 555643996U;
unsigned char var_5 = (unsigned char)252;
unsigned long long int var_6 = 3531637921002163958ULL;
unsigned int var_7 = 3584037120U;
int var_9 = -93073315;
unsigned int var_10 = 1126934409U;
short var_12 = (short)-15946;
unsigned short var_13 = (unsigned short)62986;
unsigned int var_14 = 2996214301U;
unsigned short var_15 = (unsigned short)54865;
int zero = 0;
signed char var_16 = (signed char)89;
unsigned int var_17 = 3648041393U;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)247;
_Bool var_21 = (_Bool)0;
short var_22 = (short)6145;
short var_23 = (short)31428;
_Bool arr_0 [24] ;
unsigned long long int arr_2 [24] [24] ;
short arr_3 [24] ;
unsigned int arr_8 [15] [15] ;
_Bool arr_9 [15] ;
unsigned char arr_12 [19] ;
_Bool arr_7 [18] ;
int arr_10 [15] ;
signed char arr_14 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 17432438101209340967ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)3896;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 3192227584U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1400683936 : 1422988721;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-100;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
