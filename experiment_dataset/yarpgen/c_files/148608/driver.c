#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2026975406U;
unsigned char var_4 = (unsigned char)244;
signed char var_5 = (signed char)7;
long long int var_7 = -2835301119638525290LL;
unsigned int var_9 = 3363743764U;
short var_10 = (short)-5870;
unsigned short var_11 = (unsigned short)59207;
signed char var_12 = (signed char)96;
signed char var_15 = (signed char)-24;
signed char var_17 = (signed char)90;
int zero = 0;
signed char var_18 = (signed char)28;
long long int var_19 = 8329429877959134356LL;
short var_20 = (short)29161;
unsigned short var_21 = (unsigned short)37178;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-4;
unsigned long long int var_24 = 9968201330543691566ULL;
signed char var_25 = (signed char)-74;
_Bool arr_0 [13] ;
unsigned char arr_1 [13] ;
unsigned char arr_5 [13] ;
long long int arr_9 [13] ;
unsigned short arr_2 [13] [13] ;
_Bool arr_3 [13] ;
unsigned char arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)157 : (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -2841192300084444801LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)34596;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)153 : (unsigned char)26;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
