#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1677130249;
int var_3 = -13897881;
unsigned int var_4 = 842792891U;
signed char var_5 = (signed char)126;
int var_7 = 1204003369;
unsigned char var_8 = (unsigned char)99;
short var_9 = (short)30647;
signed char var_10 = (signed char)114;
int zero = 0;
signed char var_12 = (signed char)-126;
int var_13 = -795777745;
unsigned long long int var_14 = 2706708284171596689ULL;
unsigned int var_15 = 3886806712U;
long long int var_16 = -4608727680121975857LL;
unsigned int arr_0 [18] ;
short arr_1 [18] ;
unsigned long long int arr_2 [18] ;
int arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3656464237U : 1302258403U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)8726;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 12137699033409263827ULL : 16955051124005019729ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1907591533 : 83024989;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
