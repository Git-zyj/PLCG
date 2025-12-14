#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1742496290U;
int var_1 = 744406807;
unsigned int var_3 = 727882143U;
short var_4 = (short)8509;
unsigned short var_11 = (unsigned short)12342;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)14319;
unsigned int var_14 = 50325413U;
int zero = 0;
unsigned long long int var_15 = 3446374279136053349ULL;
long long int var_16 = -1149505418145152541LL;
unsigned char var_17 = (unsigned char)223;
unsigned short var_18 = (unsigned short)21625;
unsigned int var_19 = 909833913U;
long long int var_20 = -4108819377733021456LL;
_Bool arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned long long int arr_2 [25] [25] ;
unsigned int arr_3 [25] ;
unsigned short arr_11 [11] [11] ;
long long int arr_4 [25] [25] ;
unsigned long long int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4814613914284866551ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 855221119U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)30426;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -1140666951035576459LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 8792703951780304025ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
