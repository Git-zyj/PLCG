#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -796973662;
short var_2 = (short)8675;
short var_7 = (short)-13438;
unsigned short var_10 = (unsigned short)2049;
unsigned int var_11 = 2307397459U;
long long int var_12 = 7544632556893304466LL;
unsigned long long int var_14 = 13258792588716674315ULL;
unsigned int var_15 = 1957950266U;
int zero = 0;
signed char var_17 = (signed char)54;
unsigned short var_18 = (unsigned short)34960;
long long int var_19 = -4975313155841112110LL;
unsigned short arr_0 [18] [18] ;
signed char arr_1 [18] ;
short arr_2 [18] ;
unsigned int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)47321;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)18582;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 593273645U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
