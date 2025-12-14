#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62332;
unsigned short var_4 = (unsigned short)24671;
int var_7 = 156259619;
unsigned short var_8 = (unsigned short)20339;
unsigned int var_9 = 361506927U;
unsigned long long int var_10 = 16875926801942378337ULL;
int zero = 0;
signed char var_17 = (signed char)45;
short var_18 = (short)17217;
_Bool var_19 = (_Bool)1;
long long int var_20 = 1088121127107315314LL;
unsigned int var_21 = 1815402809U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1686436026U;
unsigned long long int var_24 = 7794830878043877686ULL;
unsigned char var_25 = (unsigned char)193;
signed char var_26 = (signed char)-4;
unsigned short var_27 = (unsigned short)2663;
unsigned short arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned int arr_2 [24] [24] ;
int arr_4 [24] ;
unsigned int arr_5 [24] [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
unsigned char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)18810;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 400198699U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 816620223U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 2077365338;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 2928487535U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 979182773980209282ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)112;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
