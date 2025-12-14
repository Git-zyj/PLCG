#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 766974390U;
unsigned char var_1 = (unsigned char)1;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)52299;
unsigned short var_5 = (unsigned short)4903;
long long int var_6 = -7620725925418322240LL;
int var_9 = 1631468723;
long long int var_10 = -3817961591430358847LL;
_Bool var_12 = (_Bool)1;
int var_16 = 2043870671;
int zero = 0;
unsigned short var_17 = (unsigned short)2802;
signed char var_18 = (signed char)-38;
unsigned short var_19 = (unsigned short)2500;
int var_20 = -1588324673;
signed char var_21 = (signed char)91;
unsigned int var_22 = 1947774238U;
short var_23 = (short)-30846;
unsigned int var_24 = 1929047739U;
unsigned char var_25 = (unsigned char)219;
short arr_0 [23] ;
unsigned long long int arr_2 [23] ;
unsigned int arr_3 [24] [24] ;
unsigned short arr_6 [24] [24] [24] ;
int arr_8 [25] ;
short arr_9 [25] ;
signed char arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-19752;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 85989251049291831ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 2327343504U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)4815;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -161823444;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (short)30887;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)112 : (signed char)-93;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
