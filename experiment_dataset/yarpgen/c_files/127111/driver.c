#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1676248846;
_Bool var_5 = (_Bool)1;
short var_8 = (short)23659;
unsigned char var_10 = (unsigned char)89;
short var_11 = (short)-20122;
int zero = 0;
unsigned char var_16 = (unsigned char)195;
short var_17 = (short)-13133;
unsigned int var_18 = 2159681905U;
unsigned int var_19 = 3619963871U;
unsigned char var_20 = (unsigned char)68;
int arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 856617155;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3106749305U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2362921831U;
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
