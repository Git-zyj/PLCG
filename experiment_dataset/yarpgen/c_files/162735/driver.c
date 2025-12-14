#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27359;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_12 = 5728629249786952210ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 2094040552;
int var_15 = -1668731067;
unsigned long long int var_16 = 4807568646249828206ULL;
unsigned char var_17 = (unsigned char)62;
short var_18 = (short)16947;
int zero = 0;
unsigned short var_19 = (unsigned short)36038;
short var_20 = (short)9002;
unsigned int var_21 = 3056922051U;
unsigned short var_22 = (unsigned short)60021;
_Bool var_23 = (_Bool)0;
int var_24 = 1894245142;
unsigned long long int var_25 = 12454251935387183285ULL;
int arr_0 [12] ;
int arr_1 [12] ;
int arr_4 [12] ;
long long int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 437042689;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 763520170;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1265500094;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 7780287800346652233LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
