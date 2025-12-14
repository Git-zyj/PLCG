#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2974;
long long int var_3 = 2531179808452764042LL;
unsigned short var_4 = (unsigned short)20075;
unsigned short var_5 = (unsigned short)34478;
short var_8 = (short)-14685;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1382020081U;
unsigned short var_17 = (unsigned short)21257;
unsigned short var_18 = (unsigned short)64781;
unsigned int var_19 = 2276985853U;
signed char arr_4 [16] ;
int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1797234200;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
