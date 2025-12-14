#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_8 = (unsigned char)193;
int zero = 0;
unsigned char var_16 = (unsigned char)101;
short var_17 = (short)-18199;
unsigned short var_18 = (unsigned short)49397;
unsigned int var_19 = 2196481615U;
unsigned short var_20 = (unsigned short)42610;
signed char var_21 = (signed char)63;
unsigned long long int var_22 = 1564246825450128502ULL;
unsigned short var_23 = (unsigned short)21570;
long long int var_24 = -9196106102249202630LL;
unsigned long long int var_25 = 10626776340706989421ULL;
unsigned long long int var_26 = 17154065486907735146ULL;
_Bool arr_0 [12] ;
unsigned int arr_2 [12] [12] ;
unsigned char arr_5 [12] [12] ;
long long int arr_6 [12] ;
unsigned int arr_14 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3414633590U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -2047323611107201589LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 999610786U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
