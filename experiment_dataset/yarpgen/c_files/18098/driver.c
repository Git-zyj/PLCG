#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -343509970;
int var_2 = 405410567;
unsigned int var_3 = 701399751U;
unsigned int var_4 = 3778093623U;
short var_6 = (short)23620;
long long int var_7 = -178198054368564837LL;
unsigned char var_8 = (unsigned char)30;
unsigned char var_9 = (unsigned char)187;
unsigned int var_10 = 3156545622U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 18090703217186874914ULL;
int var_14 = -1350154248;
int var_15 = -1184134982;
int zero = 0;
unsigned char var_18 = (unsigned char)114;
signed char var_19 = (signed char)-43;
unsigned int var_20 = 197311783U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-13735;
signed char arr_0 [21] ;
short arr_1 [21] [21] ;
unsigned short arr_2 [21] [21] ;
signed char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-6819;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)37099;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)70;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
