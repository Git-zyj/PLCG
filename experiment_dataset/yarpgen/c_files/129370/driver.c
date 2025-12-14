#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
signed char var_1 = (signed char)53;
unsigned char var_5 = (unsigned char)134;
unsigned short var_8 = (unsigned short)46905;
unsigned int var_10 = 395806513U;
unsigned char var_14 = (unsigned char)1;
short var_16 = (short)-15103;
long long int var_17 = 4704295349607333298LL;
unsigned int var_18 = 1932348828U;
int zero = 0;
int var_19 = -489530651;
signed char var_20 = (signed char)77;
short var_21 = (short)-8371;
signed char var_22 = (signed char)-18;
unsigned char var_23 = (unsigned char)203;
unsigned char var_24 = (unsigned char)105;
unsigned int arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
signed char arr_2 [19] [19] [19] ;
short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 3789564253U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 974230930U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)13705;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
