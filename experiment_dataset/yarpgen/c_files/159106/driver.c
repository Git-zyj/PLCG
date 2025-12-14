#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned long long int var_1 = 3409337011657761790ULL;
int var_3 = -82961134;
int var_4 = 426287160;
int var_5 = 18391511;
unsigned long long int var_6 = 3842604616781375537ULL;
long long int var_7 = -5995279568157390755LL;
unsigned int var_10 = 4063970823U;
unsigned char var_11 = (unsigned char)70;
unsigned short var_12 = (unsigned short)31184;
long long int var_14 = 2396553992930021055LL;
int zero = 0;
unsigned short var_15 = (unsigned short)11534;
unsigned short var_16 = (unsigned short)45187;
unsigned short var_17 = (unsigned short)2136;
unsigned short var_18 = (unsigned short)19301;
signed char var_19 = (signed char)-48;
signed char arr_0 [16] ;
signed char arr_2 [16] ;
unsigned long long int arr_9 [21] ;
_Bool arr_10 [21] ;
short arr_11 [21] ;
unsigned int arr_13 [21] ;
signed char arr_7 [16] [16] [16] ;
signed char arr_19 [21] [21] ;
signed char arr_22 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-15 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 6552872455564892301ULL : 13153092851641699187ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (short)-14638;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 2891179512U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-81 : (signed char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-86 : (signed char)-96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-21 : (signed char)34;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
