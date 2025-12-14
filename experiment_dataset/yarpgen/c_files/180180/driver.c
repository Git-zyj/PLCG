#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
short var_2 = (short)-17795;
unsigned short var_4 = (unsigned short)7303;
unsigned int var_5 = 1169331799U;
unsigned long long int var_8 = 16687833375956757822ULL;
long long int var_10 = 2546201931207734633LL;
long long int var_11 = -4170990804432884996LL;
unsigned int var_13 = 3787185787U;
signed char var_14 = (signed char)-21;
unsigned short var_16 = (unsigned short)57122;
unsigned int var_18 = 3485142309U;
int zero = 0;
short var_19 = (short)-7177;
long long int var_20 = -5153661980460790752LL;
int var_21 = -1748518202;
long long int var_22 = 2777911129266833979LL;
unsigned short arr_2 [21] ;
short arr_7 [21] [21] [21] ;
signed char arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)63120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)2677;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-121 : (signed char)-99;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
