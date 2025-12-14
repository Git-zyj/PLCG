#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)245;
unsigned char var_5 = (unsigned char)59;
unsigned int var_6 = 4139455398U;
short var_7 = (short)12412;
short var_9 = (short)3585;
unsigned long long int var_10 = 11766606673189311117ULL;
int zero = 0;
signed char var_13 = (signed char)126;
long long int var_14 = -6198258754575142128LL;
signed char var_15 = (signed char)3;
unsigned long long int var_16 = 6499379489414059206ULL;
unsigned short arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)13990;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1333464622U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1529660600;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
