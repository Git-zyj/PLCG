#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2569822796U;
int var_3 = -707044149;
int var_4 = 373234425;
signed char var_5 = (signed char)-16;
int var_6 = -2092385925;
unsigned short var_7 = (unsigned short)26073;
signed char var_8 = (signed char)12;
unsigned short var_9 = (unsigned short)5046;
int zero = 0;
unsigned int var_10 = 857295058U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-76;
signed char var_13 = (signed char)83;
signed char arr_0 [16] ;
int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 674793782;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
