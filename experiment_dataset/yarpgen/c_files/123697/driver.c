#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
unsigned long long int var_1 = 12534280315753230544ULL;
long long int var_7 = 2345468419595654502LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)4211;
unsigned short var_17 = (unsigned short)4472;
unsigned int var_18 = 3322106949U;
signed char var_19 = (signed char)30;
int var_20 = -11476675;
short arr_1 [22] ;
int arr_4 [22] [22] [22] ;
_Bool arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-2826;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1131747665;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
