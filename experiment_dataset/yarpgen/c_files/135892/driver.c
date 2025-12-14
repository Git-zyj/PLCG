#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2031897984;
_Bool var_1 = (_Bool)1;
long long int var_2 = 4269807922412571865LL;
signed char var_3 = (signed char)-106;
int var_4 = 285907802;
unsigned char var_5 = (unsigned char)154;
unsigned short var_6 = (unsigned short)4431;
int var_7 = 878677919;
long long int var_9 = -4512144874644281915LL;
unsigned char var_11 = (unsigned char)184;
unsigned char var_12 = (unsigned char)251;
long long int var_13 = 596739315169500161LL;
long long int var_15 = -6130191326518346023LL;
int zero = 0;
signed char var_16 = (signed char)-87;
unsigned short var_17 = (unsigned short)25688;
unsigned int var_18 = 2138562562U;
short var_19 = (short)-7928;
unsigned short var_20 = (unsigned short)48187;
int var_21 = 1725404901;
int arr_0 [19] ;
signed char arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned int arr_3 [19] ;
int arr_6 [19] ;
long long int arr_8 [19] ;
unsigned char arr_9 [19] ;
unsigned int arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -121304098;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)45633;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1598595395U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 481142867;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 7573276284054192646LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 38867106U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
