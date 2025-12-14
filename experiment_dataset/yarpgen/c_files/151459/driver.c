#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29218;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned long long int var_13 = 8173308216800153965ULL;
unsigned long long int var_15 = 1145293886780468754ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)58992;
int var_17 = -1505525274;
short var_18 = (short)-6238;
short var_19 = (short)-10587;
signed char var_20 = (signed char)-12;
unsigned long long int var_21 = 17618501487824133499ULL;
short var_22 = (short)20385;
unsigned char var_23 = (unsigned char)201;
unsigned char var_24 = (unsigned char)54;
unsigned char var_25 = (unsigned char)15;
_Bool arr_2 [14] ;
short arr_3 [25] ;
unsigned long long int arr_4 [25] ;
unsigned short arr_6 [25] ;
unsigned short arr_7 [25] [25] [25] ;
unsigned char arr_8 [25] [25] [25] ;
long long int arr_12 [25] [25] ;
int arr_13 [25] [25] ;
short arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)1403;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 3437968081394060967ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)43686;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)40194;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 8810150758007638087LL : 4612751961989128126LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -1514885940 : 1379651872;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (short)-16900;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
