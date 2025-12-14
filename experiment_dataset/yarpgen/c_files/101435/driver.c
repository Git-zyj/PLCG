#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3748013082U;
unsigned int var_2 = 3044584967U;
long long int var_5 = 3202923679179561428LL;
int var_6 = 722295951;
short var_7 = (short)9643;
unsigned short var_11 = (unsigned short)8689;
unsigned short var_13 = (unsigned short)44614;
int zero = 0;
unsigned char var_17 = (unsigned char)107;
short var_18 = (short)324;
signed char var_19 = (signed char)-106;
int var_20 = -1558338276;
unsigned long long int var_21 = 373937083244077966ULL;
unsigned int var_22 = 2898819701U;
unsigned int var_23 = 230675166U;
unsigned long long int arr_0 [23] ;
int arr_3 [16] ;
unsigned short arr_4 [16] ;
unsigned char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2053066477143692296ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1774300;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)19865;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)128;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
