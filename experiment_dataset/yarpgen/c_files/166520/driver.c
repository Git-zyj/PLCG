#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55885;
unsigned short var_3 = (unsigned short)9705;
unsigned short var_6 = (unsigned short)49583;
unsigned int var_8 = 1565641983U;
unsigned short var_12 = (unsigned short)46144;
unsigned short var_14 = (unsigned short)43617;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 647158653U;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)4303;
unsigned short arr_2 [11] [11] ;
unsigned short arr_3 [11] ;
unsigned short arr_4 [11] [11] ;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)25413 : (unsigned short)57967;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)7136;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)57448;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)59019;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
