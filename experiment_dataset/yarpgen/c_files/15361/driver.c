#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
unsigned char var_1 = (unsigned char)237;
unsigned long long int var_5 = 119889072626491040ULL;
short var_6 = (short)16078;
unsigned long long int var_7 = 4619102884712515978ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -9031671680123098465LL;
unsigned int var_11 = 1280498567U;
short var_14 = (short)-28463;
int zero = 0;
unsigned int var_15 = 1508894799U;
unsigned char var_16 = (unsigned char)87;
unsigned int var_17 = 1900295565U;
unsigned long long int var_18 = 18320334968834382645ULL;
short var_19 = (short)30218;
unsigned char arr_1 [22] ;
unsigned int arr_2 [22] ;
_Bool arr_3 [22] [22] [22] ;
unsigned int arr_7 [22] ;
unsigned int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4219135810U : 954074331U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 9224176U : 2399394150U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 884097659U : 2617077363U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
