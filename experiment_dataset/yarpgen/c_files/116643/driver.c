#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1673464688;
unsigned int var_1 = 894513968U;
signed char var_2 = (signed char)-52;
int var_3 = -792922651;
short var_7 = (short)16237;
unsigned short var_9 = (unsigned short)10862;
signed char var_10 = (signed char)-26;
unsigned short var_12 = (unsigned short)37627;
int zero = 0;
int var_15 = -2139948994;
long long int var_16 = -6873163092906641295LL;
unsigned short var_17 = (unsigned short)3715;
long long int arr_0 [14] ;
_Bool arr_3 [14] ;
unsigned short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -5979205483047083993LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)44965;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
