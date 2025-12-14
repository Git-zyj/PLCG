#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31216;
signed char var_2 = (signed char)(-127 - 1);
short var_3 = (short)24603;
unsigned char var_4 = (unsigned char)2;
signed char var_5 = (signed char)-106;
unsigned long long int var_6 = 13848003382236095976ULL;
long long int var_8 = 8615236374740071362LL;
long long int var_9 = 8400493115562117356LL;
unsigned long long int var_10 = 10775533704410546197ULL;
long long int var_11 = -1430366532005581230LL;
unsigned long long int var_13 = 5095053270292056116ULL;
short var_14 = (short)3917;
int var_15 = 1749441854;
int zero = 0;
unsigned long long int var_16 = 10104627401890952189ULL;
signed char var_17 = (signed char)-96;
long long int var_18 = -3154452156976576191LL;
_Bool var_19 = (_Bool)1;
unsigned char arr_2 [15] [15] ;
unsigned char arr_4 [15] [15] ;
_Bool arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
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
