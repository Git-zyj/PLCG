#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7437;
short var_2 = (short)-23405;
short var_4 = (short)-3026;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 3666764254U;
unsigned int var_8 = 2809880383U;
int var_9 = -452245435;
int zero = 0;
int var_10 = 695974189;
short var_11 = (short)15739;
unsigned short var_12 = (unsigned short)44838;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int var_15 = 1757572890;
unsigned int var_16 = 634659756U;
short var_17 = (short)-12208;
int var_18 = 754188307;
unsigned int var_19 = 3557002205U;
unsigned long long int arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
int arr_2 [22] ;
int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2853637920803366074ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1927085083U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -398315577;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -173234203;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
