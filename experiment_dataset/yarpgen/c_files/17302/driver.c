#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 739000808U;
unsigned long long int var_9 = 6962247780964470568ULL;
short var_12 = (short)-1640;
unsigned long long int var_13 = 12167335947385894471ULL;
short var_19 = (short)-1052;
int zero = 0;
signed char var_20 = (signed char)-49;
int var_21 = -1554807297;
unsigned int var_22 = 2809978460U;
unsigned char var_23 = (unsigned char)103;
unsigned short var_24 = (unsigned short)65191;
unsigned long long int var_25 = 15467388761883240298ULL;
unsigned long long int arr_0 [16] ;
_Bool arr_2 [16] [16] ;
unsigned long long int arr_5 [22] ;
unsigned int arr_3 [16] [16] ;
unsigned char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 8390642657705744057ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 4869850514539623085ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 965491901U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)90;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
