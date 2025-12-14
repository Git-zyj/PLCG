#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8180148080746193949LL;
long long int var_3 = -5435987156512005636LL;
unsigned int var_7 = 3382846192U;
unsigned short var_8 = (unsigned short)28200;
unsigned short var_11 = (unsigned short)14157;
unsigned long long int var_12 = 5021837125456549940ULL;
int zero = 0;
unsigned int var_17 = 1244421508U;
int var_18 = -1201824782;
long long int var_19 = -5365902583067128505LL;
unsigned long long int var_20 = 9994927919497287684ULL;
short arr_3 [15] [15] [15] ;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)30638;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)32684;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
