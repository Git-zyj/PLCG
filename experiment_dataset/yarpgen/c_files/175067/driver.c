#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)49245;
unsigned short var_2 = (unsigned short)866;
short var_3 = (short)19050;
unsigned long long int var_4 = 10853265892821325586ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)27137;
unsigned long long int var_7 = 6293920707067643836ULL;
unsigned long long int var_8 = 13737501771951089837ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 966922822986191402ULL;
unsigned long long int var_11 = 8839962600036694303ULL;
int var_12 = 194950514;
int zero = 0;
unsigned int var_13 = 1332043467U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 18313751863812811130ULL;
unsigned char var_16 = (unsigned char)216;
unsigned long long int var_17 = 7781512813124545431ULL;
unsigned char var_18 = (unsigned char)29;
unsigned long long int var_19 = 14251188497792337838ULL;
short var_20 = (short)-13505;
signed char var_21 = (signed char)19;
unsigned int var_22 = 490649255U;
unsigned char var_23 = (unsigned char)225;
unsigned int var_24 = 567430104U;
unsigned long long int arr_2 [20] ;
unsigned char arr_3 [20] ;
unsigned char arr_6 [13] ;
short arr_7 [13] ;
_Bool arr_8 [13] ;
_Bool arr_19 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 9103052541077019825ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (short)-8130;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
