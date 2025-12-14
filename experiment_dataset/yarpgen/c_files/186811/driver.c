#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31273;
unsigned long long int var_3 = 10636694427795115953ULL;
unsigned short var_4 = (unsigned short)23984;
unsigned int var_5 = 3614699067U;
short var_6 = (short)30419;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 2335065353001633409ULL;
unsigned short var_12 = (unsigned short)39935;
int zero = 0;
unsigned short var_13 = (unsigned short)34769;
signed char var_14 = (signed char)7;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2173006040U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4612677868331070459ULL;
unsigned long long int arr_0 [23] [23] ;
unsigned int arr_2 [23] [23] [23] ;
long long int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 15043959611971001442ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1259748000U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1658015898997236648LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
