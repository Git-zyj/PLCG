#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28754;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 6256586193806458557ULL;
unsigned char var_6 = (unsigned char)53;
signed char var_8 = (signed char)6;
signed char var_9 = (signed char)-61;
int zero = 0;
short var_10 = (short)-29660;
long long int var_11 = -2695129428515542886LL;
long long int var_12 = 835978874980854431LL;
signed char var_13 = (signed char)12;
_Bool var_14 = (_Bool)0;
short var_15 = (short)26159;
long long int var_16 = 1657997420285354235LL;
unsigned char arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)44076;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)15;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
