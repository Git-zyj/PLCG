#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27913;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)242;
unsigned char var_10 = (unsigned char)53;
unsigned char var_13 = (unsigned char)95;
signed char var_14 = (signed char)-40;
int zero = 0;
unsigned short var_15 = (unsigned short)65126;
signed char var_16 = (signed char)-8;
unsigned long long int var_17 = 4221095718632544836ULL;
unsigned long long int var_18 = 3816539772177881218ULL;
unsigned long long int var_19 = 8325553515142657951ULL;
unsigned char arr_6 [23] ;
long long int arr_7 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 7305220199976563527LL;
}

void checksum() {
    hash(&seed, var_15);
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
