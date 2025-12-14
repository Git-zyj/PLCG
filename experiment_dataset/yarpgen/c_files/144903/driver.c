#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11185325834363516038ULL;
unsigned long long int var_2 = 7360134501946020427ULL;
short var_3 = (short)9058;
_Bool var_5 = (_Bool)1;
int var_7 = 1745163540;
unsigned int var_12 = 85459717U;
unsigned int var_16 = 1892868941U;
int zero = 0;
unsigned int var_18 = 769957266U;
unsigned int var_19 = 478017907U;
unsigned long long int var_20 = 8592089518158948546ULL;
unsigned int var_21 = 416445581U;
int var_22 = 1406178743;
_Bool arr_0 [20] ;
unsigned char arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)78;
}

void checksum() {
    hash(&seed, var_18);
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
