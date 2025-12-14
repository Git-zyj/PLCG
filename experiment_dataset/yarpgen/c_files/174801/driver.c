#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
_Bool var_1 = (_Bool)1;
int var_2 = 335743401;
unsigned char var_7 = (unsigned char)211;
int var_8 = -749315492;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-120;
unsigned short var_13 = (unsigned short)61720;
int zero = 0;
signed char var_14 = (signed char)97;
unsigned short var_15 = (unsigned short)45451;
unsigned char var_16 = (unsigned char)64;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-26254;
unsigned char var_19 = (unsigned char)33;
unsigned int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
long long int arr_2 [11] [11] ;
short arr_3 [11] ;
unsigned int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 461510439U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 13497202801164253853ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 4212477324065573633LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-25468;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 362548523U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
