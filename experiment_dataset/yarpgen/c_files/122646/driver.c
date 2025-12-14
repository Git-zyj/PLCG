#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
signed char var_1 = (signed char)-106;
unsigned int var_2 = 3984133712U;
unsigned char var_4 = (unsigned char)253;
short var_5 = (short)-27788;
unsigned char var_6 = (unsigned char)34;
long long int var_7 = -3775063406368401316LL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1541080347U;
unsigned char var_13 = (unsigned char)95;
unsigned int var_14 = 365814823U;
int zero = 0;
unsigned short var_15 = (unsigned short)54631;
unsigned short var_16 = (unsigned short)44357;
int var_17 = -818562832;
unsigned short var_18 = (unsigned short)16428;
unsigned short var_19 = (unsigned short)48209;
signed char arr_0 [10] ;
unsigned char arr_3 [10] ;
int arr_5 [10] ;
unsigned char arr_6 [10] ;
unsigned int arr_4 [10] [10] ;
_Bool arr_7 [10] ;
unsigned int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -381836092;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 3064890252U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 124902680U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
