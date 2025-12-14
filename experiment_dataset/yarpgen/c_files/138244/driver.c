#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 631329320153745458ULL;
long long int var_3 = -1355410043048480213LL;
int var_4 = 1306904517;
unsigned short var_6 = (unsigned short)14926;
unsigned short var_8 = (unsigned short)63989;
int zero = 0;
unsigned long long int var_11 = 17830632141097224042ULL;
unsigned long long int var_12 = 2992835734415462303ULL;
unsigned long long int var_13 = 1871663061571395517ULL;
signed char var_14 = (signed char)92;
unsigned char arr_1 [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2095906215U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)46821;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
