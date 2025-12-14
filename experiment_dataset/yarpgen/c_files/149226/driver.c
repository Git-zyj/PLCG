#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7637915423915519731LL;
unsigned short var_1 = (unsigned short)14668;
unsigned char var_2 = (unsigned char)213;
long long int var_3 = -7790073971642531508LL;
unsigned int var_4 = 3311864749U;
unsigned long long int var_5 = 5229214508663402838ULL;
signed char var_6 = (signed char)26;
unsigned long long int var_7 = 14033511663677385737ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 5217940974798300646LL;
unsigned int var_14 = 2611676650U;
unsigned short var_15 = (unsigned short)47450;
unsigned short var_16 = (unsigned short)211;
_Bool var_17 = (_Bool)0;
int var_18 = 651761906;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 617128233U;
int var_21 = 1330149305;
unsigned long long int arr_0 [10] ;
unsigned int arr_5 [10] ;
signed char arr_9 [10] [10] ;
unsigned short arr_13 [21] [21] ;
long long int arr_14 [21] [21] ;
unsigned long long int arr_18 [22] ;
unsigned long long int arr_21 [22] ;
unsigned short arr_8 [10] [10] [10] ;
short arr_11 [10] ;
short arr_12 [10] ;
long long int arr_15 [21] ;
unsigned int arr_16 [21] ;
unsigned short arr_23 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 13469111425048041419ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2347786705U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49651 : (unsigned short)21586;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = -3025750946008219675LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 12453451512756612477ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = 8748798067846435174ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)37773;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)-4973;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (short)24188;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 4512030243710571383LL : 6814595449008701605LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 2585643255U : 1297388762U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24052 : (unsigned short)31984;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
