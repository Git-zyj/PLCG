#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)239;
signed char var_3 = (signed char)0;
short var_4 = (short)-10559;
unsigned int var_5 = 2971677259U;
signed char var_8 = (signed char)39;
long long int var_12 = 5291682741898042757LL;
unsigned int var_16 = 2252848875U;
unsigned long long int var_17 = 6741272873299838370ULL;
int zero = 0;
signed char var_19 = (signed char)-59;
unsigned int var_20 = 2036133713U;
unsigned char var_21 = (unsigned char)52;
int var_22 = -678043356;
long long int arr_1 [15] [15] ;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1017735066234739821LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)33;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
