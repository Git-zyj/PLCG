#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 738316725U;
int var_2 = -337206096;
unsigned long long int var_3 = 17716244751330324457ULL;
_Bool var_7 = (_Bool)0;
int var_12 = -968883392;
int zero = 0;
long long int var_15 = 5124223213042074806LL;
long long int var_16 = 6539328815467272329LL;
long long int var_17 = -2784252838296943904LL;
long long int var_18 = -6928844566403924959LL;
unsigned long long int arr_3 [13] [13] [13] ;
short arr_6 [13] [13] [13] ;
unsigned long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2670051706305190230ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)22857;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 10000801208265723135ULL : 6771160625585130688ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
