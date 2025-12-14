#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12097;
unsigned int var_1 = 834698184U;
unsigned int var_2 = 732972808U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)201;
signed char var_6 = (signed char)-49;
unsigned char var_7 = (unsigned char)129;
short var_8 = (short)-8105;
signed char var_9 = (signed char)-25;
unsigned short var_11 = (unsigned short)59650;
long long int var_12 = 8178595099037564611LL;
int var_13 = 1384052432;
int zero = 0;
unsigned long long int var_14 = 4167096083531711275ULL;
unsigned char var_15 = (unsigned char)50;
signed char var_16 = (signed char)63;
signed char var_17 = (signed char)-61;
short var_18 = (short)-10024;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)151;
int var_21 = -614292719;
unsigned int var_22 = 3473505741U;
long long int arr_0 [16] [16] ;
unsigned short arr_1 [16] [16] ;
unsigned char arr_4 [25] ;
short arr_5 [25] ;
unsigned int arr_7 [13] ;
unsigned int arr_8 [13] ;
unsigned short arr_2 [16] ;
unsigned short arr_3 [16] [16] ;
unsigned short arr_6 [25] [25] ;
unsigned char arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -7649215378628940183LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)6096;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-17366;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 3552135366U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3380298097U : 1600605533U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)30297;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)28880;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)31605;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)35 : (unsigned char)25;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
