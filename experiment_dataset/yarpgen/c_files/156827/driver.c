#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21795;
unsigned long long int var_6 = 1324835606400369665ULL;
unsigned int var_8 = 1610704443U;
unsigned int var_10 = 1119405027U;
unsigned char var_12 = (unsigned char)148;
unsigned char var_17 = (unsigned char)107;
int zero = 0;
short var_18 = (short)-4448;
int var_19 = 1787133522;
unsigned long long int var_20 = 9388972296445384937ULL;
unsigned char var_21 = (unsigned char)212;
unsigned long long int var_22 = 9797878388361803101ULL;
unsigned long long int var_23 = 11439655711868882363ULL;
unsigned int arr_0 [21] [21] ;
unsigned long long int arr_1 [21] [21] ;
unsigned char arr_2 [21] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 857848867U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 13523527947205362547ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 13694242243093893142ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
