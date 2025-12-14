#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1187410520U;
long long int var_3 = 4077067252686985127LL;
int var_8 = -1694929171;
unsigned short var_9 = (unsigned short)2171;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)34;
long long int var_19 = -5411977834071300439LL;
short var_20 = (short)23131;
unsigned short var_21 = (unsigned short)18947;
short var_22 = (short)-11848;
_Bool var_23 = (_Bool)1;
short var_24 = (short)30000;
int var_25 = 1292557322;
short var_26 = (short)22639;
short arr_0 [18] ;
int arr_4 [18] ;
unsigned int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-22328;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1280074305;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 1466498966U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
