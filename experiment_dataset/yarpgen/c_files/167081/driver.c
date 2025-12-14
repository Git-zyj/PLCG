#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10399980146725556734ULL;
unsigned short var_15 = (unsigned short)18922;
int zero = 0;
unsigned int var_16 = 2734756253U;
unsigned short var_17 = (unsigned short)8486;
unsigned short var_18 = (unsigned short)15107;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2139046355U;
unsigned char arr_2 [25] [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)28;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
