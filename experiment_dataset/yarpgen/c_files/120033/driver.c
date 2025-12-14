#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28429;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)68;
unsigned int var_6 = 3057342013U;
unsigned long long int var_7 = 10474553152413825163ULL;
unsigned long long int var_9 = 13368760701575527871ULL;
long long int var_10 = -8130718806603784971LL;
short var_13 = (short)2804;
int zero = 0;
signed char var_15 = (signed char)96;
unsigned long long int var_16 = 3644390979689747102ULL;
long long int var_17 = -2730141183342190024LL;
int var_18 = 1330464495;
unsigned char var_19 = (unsigned char)233;
unsigned char var_20 = (unsigned char)232;
unsigned short var_21 = (unsigned short)39655;
long long int var_22 = 6051555717219888676LL;
unsigned int var_23 = 2094149824U;
unsigned char var_24 = (unsigned char)95;
unsigned long long int arr_1 [19] ;
signed char arr_3 [19] ;
_Bool arr_4 [19] [19] [19] ;
unsigned long long int arr_5 [19] [19] [19] [19] ;
short arr_6 [11] ;
long long int arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 9830228107862727097ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 6012821402875990657ULL : 9744677031750979740ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)730;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 5737711120812417163LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
