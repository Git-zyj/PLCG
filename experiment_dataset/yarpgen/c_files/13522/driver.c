#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7720767030540846567LL;
signed char var_3 = (signed char)15;
unsigned int var_8 = 3132500213U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 9181900247667173012LL;
long long int var_13 = 3452939385912546405LL;
unsigned char var_14 = (unsigned char)144;
int var_16 = -1681072852;
int var_17 = -394598285;
long long int var_18 = -4556134068548625647LL;
long long int var_19 = -1754577390953213937LL;
int zero = 0;
int var_20 = -792484955;
long long int var_21 = -409448399028778070LL;
unsigned char var_22 = (unsigned char)174;
signed char var_23 = (signed char)102;
long long int arr_3 [19] [19] ;
int arr_4 [19] [19] ;
short arr_6 [19] ;
unsigned char arr_9 [19] ;
signed char arr_10 [19] [19] ;
short arr_11 [19] [19] [19] ;
signed char arr_12 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -1188949615015256216LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -1641570797;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)30438;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-23787 : (short)-6259;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)-11;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
