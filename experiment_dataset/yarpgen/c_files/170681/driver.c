#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 638195479U;
unsigned short var_1 = (unsigned short)51626;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-101;
int var_4 = 761605237;
unsigned short var_5 = (unsigned short)20652;
unsigned char var_6 = (unsigned char)128;
unsigned char var_8 = (unsigned char)56;
int var_9 = 381917364;
int zero = 0;
int var_10 = -1285488046;
unsigned long long int var_11 = 2567001487206571186ULL;
int var_12 = 290108718;
signed char var_13 = (signed char)98;
unsigned long long int var_14 = 8762188972337646206ULL;
unsigned char var_15 = (unsigned char)236;
unsigned short var_16 = (unsigned short)28983;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_2 [18] ;
int arr_3 [24] ;
_Bool arr_4 [24] [24] ;
unsigned char arr_6 [24] ;
signed char arr_7 [24] ;
_Bool arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5106987873946255603ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1146698499;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
