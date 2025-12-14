#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
unsigned long long int var_1 = 7578430285231167996ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)24434;
int var_6 = 209811033;
signed char var_8 = (signed char)125;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2563782500U;
long long int var_11 = 3321286774547585828LL;
unsigned long long int var_13 = 9642300403994948477ULL;
short var_15 = (short)-17303;
int zero = 0;
unsigned short var_16 = (unsigned short)20376;
unsigned short var_17 = (unsigned short)61599;
unsigned int var_18 = 1970464238U;
int var_19 = -217874530;
unsigned char var_20 = (unsigned char)157;
unsigned char var_21 = (unsigned char)110;
unsigned char var_22 = (unsigned char)135;
unsigned short arr_0 [11] ;
unsigned char arr_1 [11] ;
_Bool arr_2 [11] ;
signed char arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)11649;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)83;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
