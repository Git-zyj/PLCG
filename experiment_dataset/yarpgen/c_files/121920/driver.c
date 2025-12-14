#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7350;
unsigned short var_2 = (unsigned short)24153;
short var_5 = (short)-31079;
unsigned long long int var_6 = 6338038228421331156ULL;
short var_7 = (short)22467;
short var_9 = (short)23654;
unsigned char var_10 = (unsigned char)34;
short var_11 = (short)-22997;
signed char var_12 = (signed char)53;
int zero = 0;
unsigned long long int var_13 = 18092899038726939787ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)5787;
unsigned long long int var_16 = 1026880240465555734ULL;
unsigned char var_17 = (unsigned char)227;
unsigned char arr_0 [22] ;
_Bool arr_1 [22] ;
unsigned long long int arr_2 [22] ;
int arr_3 [22] ;
unsigned long long int arr_4 [22] ;
unsigned long long int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 15453201899885543135ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2078550917;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 2607774875891807745ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 5738492032369783080ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
