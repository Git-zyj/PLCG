#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28623;
unsigned char var_1 = (unsigned char)201;
unsigned int var_7 = 2768490466U;
unsigned short var_8 = (unsigned short)4633;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)41;
int zero = 0;
short var_16 = (short)4335;
signed char var_17 = (signed char)-18;
unsigned int var_18 = 2763008031U;
signed char arr_0 [17] ;
signed char arr_1 [17] ;
signed char arr_2 [17] ;
unsigned short arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)12213;
}

void checksum() {
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
