#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
long long int var_2 = -1438101471115469183LL;
long long int var_5 = 1134939936474554068LL;
unsigned short var_6 = (unsigned short)6641;
unsigned char var_7 = (unsigned char)221;
short var_9 = (short)6001;
unsigned short var_10 = (unsigned short)16549;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-81;
int zero = 0;
short var_14 = (short)-28104;
unsigned int var_15 = 263315786U;
unsigned int var_16 = 1744727216U;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3196431026U;
unsigned int var_20 = 1048226073U;
long long int var_21 = 8117924284800373260LL;
unsigned short var_22 = (unsigned short)28175;
signed char arr_1 [11] ;
unsigned short arr_2 [11] ;
long long int arr_12 [11] [11] [11] ;
unsigned char arr_20 [19] ;
short arr_3 [11] ;
_Bool arr_14 [11] [11] [11] ;
long long int arr_19 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)59184;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6465583685106146691LL : 6673592533078242922LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-25307 : (short)29033;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -8556068243628301504LL : 8636578869852971131LL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
