#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
signed char var_2 = (signed char)(-127 - 1);
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2780401622U;
signed char var_11 = (signed char)-32;
short var_12 = (short)8344;
unsigned char var_13 = (unsigned char)74;
long long int var_15 = -7109050877779440868LL;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
unsigned long long int var_21 = 15361531873903136356ULL;
unsigned char var_22 = (unsigned char)226;
int arr_1 [11] [11] ;
unsigned char arr_2 [11] ;
_Bool arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -1899000264;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
