#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
int var_1 = 1393617170;
long long int var_2 = -901344601638460154LL;
signed char var_3 = (signed char)90;
short var_4 = (short)7481;
short var_5 = (short)-14119;
signed char var_6 = (signed char)94;
long long int var_7 = -3289719383388180436LL;
unsigned long long int var_8 = 16201551206527244809ULL;
short var_9 = (short)-31402;
signed char var_10 = (signed char)-48;
signed char var_11 = (signed char)105;
int var_12 = 852617983;
int zero = 0;
signed char var_13 = (signed char)-104;
unsigned char var_14 = (unsigned char)114;
signed char var_15 = (signed char)3;
unsigned short var_16 = (unsigned short)41458;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 4281431100U;
long long int var_19 = -2821295444512525891LL;
signed char var_20 = (signed char)123;
unsigned char var_21 = (unsigned char)68;
signed char var_22 = (signed char)40;
unsigned int arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
short arr_2 [19] ;
_Bool arr_3 [25] [25] ;
short arr_4 [25] ;
short arr_5 [25] ;
signed char arr_12 [22] [22] ;
unsigned char arr_6 [25] ;
signed char arr_7 [25] [25] ;
long long int arr_10 [16] ;
long long int arr_11 [16] ;
signed char arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 4250879665U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)58771;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-30013;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)26357;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)24508;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)198 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-59 : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 4113251593233251492LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -8488630203279953506LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (signed char)-84;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
