#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)97;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 11545580149138751835ULL;
unsigned char var_6 = (unsigned char)34;
signed char var_9 = (signed char)119;
unsigned short var_10 = (unsigned short)50881;
unsigned long long int var_11 = 14389894156003341510ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)92;
unsigned short var_14 = (unsigned short)30988;
unsigned long long int var_15 = 9136842568898550060ULL;
unsigned char var_16 = (unsigned char)113;
int zero = 0;
unsigned long long int var_18 = 5413136490333646865ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 11043210823581649475ULL;
signed char var_21 = (signed char)-26;
unsigned short var_22 = (unsigned short)20544;
unsigned short var_23 = (unsigned short)5582;
unsigned int var_24 = 3937953825U;
unsigned short var_25 = (unsigned short)41342;
unsigned short var_26 = (unsigned short)63772;
_Bool arr_0 [19] ;
_Bool arr_1 [19] ;
_Bool arr_3 [19] ;
signed char arr_6 [14] ;
_Bool arr_7 [14] ;
unsigned long long int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 5455225923931770268ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
