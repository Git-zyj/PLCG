#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12659777045976873747ULL;
unsigned short var_3 = (unsigned short)13084;
long long int var_4 = -6379167289192738898LL;
short var_5 = (short)29281;
short var_6 = (short)1620;
long long int var_7 = -138040619933749366LL;
unsigned short var_11 = (unsigned short)17023;
int zero = 0;
short var_13 = (short)-26401;
long long int var_14 = 2333838836334498897LL;
signed char var_15 = (signed char)121;
long long int var_16 = 6709708228246225529LL;
short var_17 = (short)17051;
signed char arr_2 [19] [19] ;
unsigned int arr_6 [19] ;
unsigned char arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 318476596U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)61 : (unsigned char)157;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
