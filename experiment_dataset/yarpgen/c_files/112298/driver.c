#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7733347707179959458ULL;
unsigned int var_4 = 2097830007U;
unsigned char var_6 = (unsigned char)192;
unsigned char var_8 = (unsigned char)189;
unsigned int var_10 = 2914755990U;
unsigned int var_11 = 2142604513U;
unsigned long long int var_15 = 6543634878063926807ULL;
unsigned char var_16 = (unsigned char)5;
int zero = 0;
long long int var_18 = 9089592874899922477LL;
unsigned char var_19 = (unsigned char)66;
long long int var_20 = 3255461522572991552LL;
unsigned long long int var_21 = 16470051343686952596ULL;
unsigned short var_22 = (unsigned short)16285;
unsigned int var_23 = 1599072920U;
signed char var_24 = (signed char)126;
short arr_0 [15] ;
unsigned int arr_1 [15] [15] ;
unsigned long long int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)2015;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 1398939383U : 3207750714U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 9087749665706412419ULL;
}

void checksum() {
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
