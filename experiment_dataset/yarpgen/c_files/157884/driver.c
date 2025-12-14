#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
_Bool var_5 = (_Bool)1;
int var_6 = -461914632;
unsigned int var_7 = 3089708340U;
unsigned char var_9 = (unsigned char)106;
signed char var_10 = (signed char)-119;
int var_11 = 84950681;
int zero = 0;
long long int var_14 = -5647153508753160650LL;
signed char var_15 = (signed char)97;
unsigned long long int var_16 = 3043698747765521797ULL;
signed char var_17 = (signed char)121;
int var_18 = 747886251;
unsigned long long int var_19 = 16800949391435970469ULL;
_Bool var_20 = (_Bool)0;
short arr_0 [23] [23] ;
unsigned char arr_1 [23] ;
_Bool arr_4 [23] [23] [23] ;
int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)14233;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1425388045;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
