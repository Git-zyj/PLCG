#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
unsigned char var_4 = (unsigned char)126;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2451257821U;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)100;
unsigned int var_13 = 2090697609U;
int zero = 0;
signed char var_14 = (signed char)-6;
unsigned short var_15 = (unsigned short)30718;
short var_16 = (short)6510;
short var_17 = (short)-29439;
unsigned long long int var_18 = 9588769430669187026ULL;
long long int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -7935915204695152077LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
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
