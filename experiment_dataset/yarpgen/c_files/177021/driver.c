#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-66;
signed char var_3 = (signed char)-7;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)192;
signed char var_7 = (signed char)86;
unsigned long long int var_8 = 17883408145618688946ULL;
unsigned long long int var_10 = 13578603805703921203ULL;
int zero = 0;
short var_13 = (short)-22488;
unsigned short var_14 = (unsigned short)34096;
short var_15 = (short)2460;
unsigned long long int var_16 = 8934861807697290479ULL;
short var_17 = (short)10440;
unsigned int var_18 = 3361153886U;
short arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
_Bool arr_2 [15] [15] [15] ;
unsigned long long int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-10255;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 12371251479922313857ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 17374891379851185952ULL;
}

void checksum() {
    hash(&seed, var_13);
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
