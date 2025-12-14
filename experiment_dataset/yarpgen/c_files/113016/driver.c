#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)32561;
long long int var_3 = 2509363084761924240LL;
unsigned short var_8 = (unsigned short)53257;
short var_10 = (short)7179;
short var_14 = (short)32399;
long long int var_15 = 7436484070560783915LL;
short var_16 = (short)17126;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)27423;
signed char var_19 = (signed char)46;
unsigned short arr_1 [10] ;
unsigned short arr_2 [10] ;
short arr_6 [10] [10] ;
unsigned char arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)9961;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)34814;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)2924 : (short)-23671;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)221 : (unsigned char)73;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
