#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32397;
unsigned long long int var_2 = 16730652969269744152ULL;
int var_3 = -1269512228;
signed char var_5 = (signed char)116;
signed char var_6 = (signed char)-127;
unsigned char var_8 = (unsigned char)115;
signed char var_9 = (signed char)66;
int var_10 = -2025540221;
unsigned int var_12 = 1305974448U;
short var_13 = (short)-8041;
signed char var_14 = (signed char)65;
unsigned long long int var_15 = 3021614176570139234ULL;
int zero = 0;
signed char var_17 = (signed char)98;
int var_18 = -1753913418;
unsigned int var_19 = 3979503673U;
unsigned short var_20 = (unsigned short)45930;
unsigned long long int var_21 = 7769212213929697644ULL;
unsigned short var_22 = (unsigned short)64097;
short arr_5 [14] ;
unsigned long long int arr_6 [14] [14] ;
long long int arr_12 [13] [13] ;
short arr_8 [14] [14] ;
unsigned long long int arr_9 [14] ;
short arr_16 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (short)23149;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 17726701146631873332ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = -3637199610415229709LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (short)29539;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 6052122467124385692ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-27700;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
