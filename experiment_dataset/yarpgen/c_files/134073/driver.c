#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5944116502296365790ULL;
unsigned long long int var_1 = 6217834277178890849ULL;
unsigned short var_2 = (unsigned short)33245;
unsigned int var_4 = 3247806863U;
unsigned short var_6 = (unsigned short)17843;
unsigned int var_7 = 1375107975U;
unsigned int var_8 = 3381991024U;
unsigned int var_9 = 2756170776U;
int var_13 = 1730378737;
unsigned int var_14 = 1613887338U;
int zero = 0;
long long int var_15 = 3757727714989251573LL;
unsigned int var_16 = 1738543119U;
int var_17 = 1987677884;
long long int var_18 = 6373809642977695064LL;
unsigned long long int var_19 = 7247699220548884222ULL;
unsigned int var_20 = 98607652U;
unsigned int arr_2 [25] [25] [25] ;
_Bool arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1733001068U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
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
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
