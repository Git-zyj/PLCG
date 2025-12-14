#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-102;
unsigned int var_3 = 214238631U;
unsigned char var_6 = (unsigned char)59;
_Bool var_9 = (_Bool)0;
unsigned long long int var_15 = 7582805799092047772ULL;
int zero = 0;
short var_19 = (short)-7446;
unsigned char var_20 = (unsigned char)127;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned char arr_0 [18] [18] ;
short arr_1 [18] [18] ;
signed char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)23741;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)86;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
