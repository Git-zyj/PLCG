#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)135;
unsigned char var_6 = (unsigned char)58;
unsigned int var_8 = 3339671894U;
long long int var_11 = 5221725730875033270LL;
unsigned long long int var_12 = 13163329657265413867ULL;
int zero = 0;
int var_14 = 710269588;
short var_15 = (short)-3044;
long long int var_16 = 5310700349270784509LL;
long long int var_17 = 5555297861994663061LL;
long long int var_18 = 1792747105213651263LL;
unsigned short arr_0 [24] ;
short arr_1 [24] [24] ;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46483 : (unsigned short)24354;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)18337;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35577 : (unsigned short)36491;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
