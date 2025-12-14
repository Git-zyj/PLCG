#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned char var_1 = (unsigned char)242;
long long int var_2 = 8596962106478687182LL;
int var_4 = 1739201412;
unsigned long long int var_6 = 707956824228098271ULL;
unsigned char var_7 = (unsigned char)18;
unsigned char var_9 = (unsigned char)64;
unsigned int var_10 = 1553382043U;
unsigned long long int var_11 = 6865214060930358844ULL;
signed char var_13 = (signed char)40;
unsigned char var_14 = (unsigned char)238;
long long int var_15 = 1915720371996464968LL;
int zero = 0;
unsigned long long int var_16 = 25974007869717543ULL;
unsigned long long int var_17 = 14587440690867643172ULL;
unsigned long long int var_18 = 10754400495706942724ULL;
unsigned long long int var_19 = 10005161138526428494ULL;
unsigned char var_20 = (unsigned char)143;
unsigned char var_21 = (unsigned char)109;
_Bool arr_0 [24] [24] ;
signed char arr_1 [24] [24] ;
short arr_2 [24] [24] ;
unsigned long long int arr_3 [24] ;
int arr_4 [24] ;
_Bool arr_5 [24] [24] ;
short arr_6 [24] [24] [24] [24] ;
_Bool arr_7 [24] ;
int arr_8 [24] [24] [24] [24] [24] ;
unsigned long long int arr_9 [24] [24] [24] ;
unsigned char arr_10 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)11907;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 15141100944713938926ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1412808278;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)3182;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -668848552 : -501152003;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1406443910005450082ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)234;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
