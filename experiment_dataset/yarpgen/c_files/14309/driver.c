#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1032060254U;
int var_3 = -1209138998;
int var_4 = -1854453660;
unsigned long long int var_5 = 8594914628237130282ULL;
unsigned long long int var_6 = 744913962146452129ULL;
unsigned long long int var_9 = 5476475347352147418ULL;
unsigned short var_11 = (unsigned short)9058;
int var_12 = 1333047538;
unsigned char var_13 = (unsigned char)249;
signed char var_16 = (signed char)-81;
int zero = 0;
unsigned char var_17 = (unsigned char)130;
unsigned char var_18 = (unsigned char)25;
unsigned int var_19 = 1349175295U;
unsigned long long int var_20 = 16041065266741922492ULL;
int var_21 = -1660990768;
unsigned char var_22 = (unsigned char)220;
unsigned long long int var_23 = 1948955296489658010ULL;
unsigned char var_24 = (unsigned char)116;
unsigned char var_25 = (unsigned char)50;
unsigned int var_26 = 3869297263U;
int arr_0 [23] ;
int arr_1 [23] ;
signed char arr_2 [23] ;
unsigned long long int arr_11 [24] [24] ;
unsigned long long int arr_12 [24] [24] ;
int arr_14 [24] ;
unsigned int arr_15 [24] [24] [24] ;
signed char arr_16 [24] ;
short arr_18 [24] ;
unsigned int arr_6 [23] ;
long long int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -1846678935;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 608813200;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 16515554627957884262ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 2726630486490411488ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -2039872289;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 134745855U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (short)32382;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 3445811847U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 1707953402615520246LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
