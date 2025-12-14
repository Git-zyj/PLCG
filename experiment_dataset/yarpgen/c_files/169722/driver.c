#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2435588281824926538LL;
int var_1 = 550747008;
unsigned short var_2 = (unsigned short)6099;
unsigned short var_3 = (unsigned short)25686;
unsigned char var_4 = (unsigned char)9;
unsigned int var_5 = 795885934U;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-9;
unsigned int var_10 = 95099711U;
short var_11 = (short)-12539;
int zero = 0;
unsigned short var_12 = (unsigned short)64503;
short var_13 = (short)-9477;
unsigned short var_14 = (unsigned short)40211;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)215;
short var_17 = (short)13816;
unsigned char var_18 = (unsigned char)130;
signed char var_19 = (signed char)-109;
unsigned int arr_0 [18] ;
long long int arr_1 [18] ;
unsigned char arr_5 [18] ;
short arr_13 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 710905245U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3216646269780737882LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-573;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
