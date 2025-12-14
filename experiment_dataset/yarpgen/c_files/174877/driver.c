#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2711689766U;
unsigned char var_1 = (unsigned char)133;
unsigned int var_3 = 530110184U;
unsigned long long int var_4 = 17086580238573207382ULL;
unsigned long long int var_5 = 1344400946380400927ULL;
unsigned long long int var_6 = 16505562176984553502ULL;
signed char var_8 = (signed char)-14;
signed char var_9 = (signed char)-89;
unsigned long long int var_12 = 8909874623471672286ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)51677;
signed char var_14 = (signed char)123;
unsigned short var_15 = (unsigned short)42851;
unsigned char var_16 = (unsigned char)192;
unsigned char var_17 = (unsigned char)209;
short var_18 = (short)16802;
short var_19 = (short)-26742;
int var_20 = 995643896;
unsigned short var_21 = (unsigned short)32255;
int arr_1 [13] ;
unsigned short arr_3 [14] ;
long long int arr_4 [14] ;
signed char arr_5 [14] ;
unsigned char arr_13 [22] [22] [22] ;
unsigned short arr_14 [22] ;
unsigned int arr_2 [13] [13] ;
unsigned long long int arr_6 [14] ;
unsigned long long int arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1005597409;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)44018;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -5903152931155430817LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)62872;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 2176110221U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 10421566903802634570ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 13206308402059525518ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
