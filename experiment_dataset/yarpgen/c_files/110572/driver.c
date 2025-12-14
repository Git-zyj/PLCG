#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)50;
unsigned char var_6 = (unsigned char)91;
long long int var_7 = 420619369079895458LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)36848;
int zero = 0;
int var_17 = 224883759;
int var_18 = -469406135;
unsigned char var_19 = (unsigned char)130;
unsigned char var_20 = (unsigned char)83;
unsigned char var_21 = (unsigned char)78;
signed char var_22 = (signed char)(-127 - 1);
int var_23 = -1616237366;
int arr_0 [17] ;
int arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned char arr_3 [17] [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1120461535;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -823797044 : 1781371314;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -1682199086563445420LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
