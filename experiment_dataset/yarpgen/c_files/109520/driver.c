#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20145;
unsigned long long int var_3 = 2967539657603717990ULL;
unsigned char var_4 = (unsigned char)243;
unsigned short var_6 = (unsigned short)15135;
unsigned char var_9 = (unsigned char)140;
int var_12 = -1581187727;
signed char var_13 = (signed char)-65;
unsigned char var_16 = (unsigned char)18;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)23486;
unsigned char var_20 = (unsigned char)34;
unsigned long long int var_21 = 6510159241203020863ULL;
unsigned long long int var_22 = 7847583439149743086ULL;
unsigned int var_23 = 1467387746U;
unsigned long long int var_24 = 10346292761390034515ULL;
unsigned int var_25 = 3335213552U;
short var_26 = (short)-12116;
short var_27 = (short)29914;
signed char var_28 = (signed char)20;
long long int arr_0 [17] ;
long long int arr_1 [17] ;
unsigned char arr_4 [25] [25] ;
short arr_5 [25] [25] ;
unsigned short arr_6 [11] ;
long long int arr_7 [11] ;
int arr_2 [17] [17] ;
unsigned short arr_3 [17] ;
unsigned int arr_8 [11] ;
unsigned int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -7685557007535176963LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 8507494541917754080LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (short)30965;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)16528;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 3381205317410010632LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 450242527;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)56309;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 1440873694U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 117662051U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
