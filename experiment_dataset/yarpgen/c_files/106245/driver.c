#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31095;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2759217930U;
unsigned int var_6 = 3267703624U;
short var_7 = (short)7438;
unsigned int var_9 = 2465264237U;
unsigned long long int var_10 = 11447890866336840809ULL;
int zero = 0;
long long int var_14 = 5679578608871842072LL;
short var_15 = (short)12165;
signed char var_16 = (signed char)-120;
unsigned long long int var_17 = 4781974853613704227ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 1947532186073484008ULL;
int var_20 = -437840303;
unsigned long long int var_21 = 15564644146578786012ULL;
int arr_9 [22] [22] ;
short arr_15 [17] [17] ;
_Bool arr_16 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -214396834 : -1155982497;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-32626;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
