#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8095461823584970864LL;
unsigned short var_3 = (unsigned short)24888;
int var_5 = -643826096;
unsigned int var_7 = 690006137U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3834878792U;
int var_11 = -962815420;
short var_12 = (short)7726;
int zero = 0;
int var_17 = 756208910;
unsigned char var_18 = (unsigned char)15;
short var_19 = (short)23931;
short arr_0 [24] ;
_Bool arr_1 [24] ;
unsigned short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)16925;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)16664;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
