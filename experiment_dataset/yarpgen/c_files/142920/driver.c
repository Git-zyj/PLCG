#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
unsigned long long int var_6 = 13337634573913344985ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 1689253370178592753ULL;
unsigned char var_11 = (unsigned char)129;
unsigned char var_12 = (unsigned char)33;
signed char var_13 = (signed char)-4;
unsigned short var_15 = (unsigned short)65482;
int zero = 0;
unsigned short var_17 = (unsigned short)64834;
signed char var_18 = (signed char)62;
short var_19 = (short)2940;
_Bool arr_0 [23] ;
unsigned char arr_2 [23] ;
_Bool arr_3 [23] ;
unsigned long long int arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)239 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 11266016227630029919ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
