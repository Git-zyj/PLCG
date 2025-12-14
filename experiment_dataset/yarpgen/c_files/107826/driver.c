#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)249;
signed char var_8 = (signed char)94;
unsigned int var_9 = 849614523U;
unsigned short var_13 = (unsigned short)33099;
int zero = 0;
unsigned int var_14 = 4211019541U;
unsigned int var_15 = 2906110871U;
unsigned int var_16 = 3876099621U;
unsigned char var_17 = (unsigned char)154;
_Bool var_18 = (_Bool)0;
unsigned short arr_2 [18] ;
unsigned short arr_4 [18] ;
unsigned int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)38339;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)58244;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 2757593670U;
}

void checksum() {
    hash(&seed, var_14);
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
