#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6319558479162930775LL;
signed char var_2 = (signed char)-64;
int var_5 = -1417770610;
signed char var_6 = (signed char)30;
short var_8 = (short)2233;
unsigned int var_13 = 2028437097U;
long long int var_14 = -2252499757553728478LL;
signed char var_15 = (signed char)-68;
int zero = 0;
signed char var_16 = (signed char)60;
unsigned long long int var_17 = 115385127045831483ULL;
int var_18 = 24972520;
unsigned char var_19 = (unsigned char)184;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2460472909U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 566922621U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-59;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
