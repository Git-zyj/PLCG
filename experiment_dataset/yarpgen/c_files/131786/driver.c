#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61410;
unsigned int var_7 = 4138468530U;
unsigned short var_10 = (unsigned short)59881;
unsigned short var_11 = (unsigned short)55548;
signed char var_12 = (signed char)79;
int zero = 0;
signed char var_13 = (signed char)-3;
unsigned short var_14 = (unsigned short)51847;
unsigned long long int var_15 = 13192235095415962391ULL;
short var_16 = (short)-7332;
_Bool arr_0 [11] ;
unsigned short arr_1 [11] ;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)24331;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)14611;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
