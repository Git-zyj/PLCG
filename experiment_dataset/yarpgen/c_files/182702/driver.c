#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2556195864U;
long long int var_5 = -601542566409292858LL;
unsigned int var_6 = 1901729992U;
int var_7 = -712252876;
unsigned short var_8 = (unsigned short)9237;
unsigned char var_9 = (unsigned char)206;
unsigned short var_11 = (unsigned short)63789;
unsigned short var_13 = (unsigned short)8166;
unsigned short var_15 = (unsigned short)2709;
long long int var_16 = 5992134058046453470LL;
long long int var_17 = -7801425132627160825LL;
int zero = 0;
signed char var_19 = (signed char)-66;
unsigned int var_20 = 3056665328U;
int var_21 = 1802828628;
unsigned int var_22 = 733588452U;
signed char var_23 = (signed char)89;
signed char var_24 = (signed char)-78;
unsigned int var_25 = 437704597U;
long long int var_26 = -5801038524527973496LL;
long long int var_27 = -7636863554543772880LL;
unsigned char var_28 = (unsigned char)168;
long long int arr_4 [16] ;
long long int arr_6 [14] ;
_Bool arr_2 [16] ;
unsigned int arr_5 [16] [16] ;
unsigned short arr_8 [14] ;
unsigned int arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 763029499701322953LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -5591107573695572687LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 58951203U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)51343;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 2592662873U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
