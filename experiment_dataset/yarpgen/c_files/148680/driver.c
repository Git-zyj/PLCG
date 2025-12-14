#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5027;
signed char var_2 = (signed char)89;
unsigned long long int var_3 = 4158148374752094602ULL;
long long int var_5 = -261966763460609142LL;
short var_6 = (short)-25801;
short var_10 = (short)13301;
unsigned int var_11 = 622505289U;
long long int var_12 = 3523827505719335518LL;
unsigned long long int var_13 = 8625770514593451683ULL;
long long int var_14 = 3701475748634855264LL;
int zero = 0;
short var_17 = (short)23204;
unsigned int var_18 = 2387898501U;
unsigned int var_19 = 2050385758U;
unsigned int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
unsigned long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2357427704U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 195554484950104684ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 6774541460738177635ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
