#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1520879814;
unsigned short var_2 = (unsigned short)36555;
unsigned short var_4 = (unsigned short)1731;
unsigned long long int var_5 = 5019873451893049837ULL;
unsigned char var_6 = (unsigned char)27;
signed char var_7 = (signed char)51;
signed char var_8 = (signed char)-42;
unsigned int var_9 = 3635582143U;
unsigned long long int var_10 = 12141328162949700177ULL;
unsigned char var_11 = (unsigned char)34;
unsigned char var_13 = (unsigned char)162;
unsigned short var_15 = (unsigned short)52431;
int var_16 = 1966793041;
signed char var_17 = (signed char)48;
int zero = 0;
long long int var_18 = -5395958115716213974LL;
unsigned char var_19 = (unsigned char)152;
unsigned char var_20 = (unsigned char)45;
unsigned long long int var_21 = 4434200573751145594ULL;
short var_22 = (short)-1926;
int var_23 = -791152363;
short var_24 = (short)31230;
unsigned int var_25 = 2287154026U;
unsigned int var_26 = 3113911487U;
unsigned int var_27 = 429724613U;
unsigned int arr_0 [21] ;
unsigned int arr_1 [21] ;
signed char arr_2 [21] ;
signed char arr_3 [21] [21] [21] ;
short arr_4 [21] [21] ;
signed char arr_7 [13] [13] ;
signed char arr_8 [13] ;
long long int arr_11 [13] ;
unsigned int arr_16 [13] ;
_Bool arr_24 [13] [13] [13] ;
signed char arr_5 [21] ;
_Bool arr_6 [21] ;
long long int arr_9 [13] ;
unsigned int arr_10 [13] ;
long long int arr_13 [13] ;
unsigned short arr_17 [13] ;
unsigned short arr_18 [13] ;
unsigned long long int arr_19 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3061364153U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 4153147180U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-26078;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -2104642770633207397LL : 6547685133411559904LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 1372736599U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 5427681595249709886LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 4238539400U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 865862826957195470LL : 4373587197392289442LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56779 : (unsigned short)42063;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14712 : (unsigned short)30782;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 11872528425891334192ULL : 5745327731520361277ULL;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
