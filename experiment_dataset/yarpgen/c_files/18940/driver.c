#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6032330365452591377ULL;
short var_3 = (short)-28890;
short var_4 = (short)-17778;
long long int var_5 = 7010548146256744249LL;
long long int var_6 = -1539949300452130586LL;
long long int var_11 = 7852767952892861325LL;
unsigned char var_12 = (unsigned char)153;
long long int var_13 = -2512211212299534544LL;
unsigned int var_14 = 3746880358U;
unsigned char var_15 = (unsigned char)4;
int var_16 = 439716945;
unsigned char var_17 = (unsigned char)194;
short var_18 = (short)8139;
int zero = 0;
long long int var_20 = 1062370948610772252LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)10135;
_Bool var_23 = (_Bool)0;
long long int var_24 = 3929423058413316798LL;
unsigned int var_25 = 311042809U;
short var_26 = (short)23295;
unsigned long long int var_27 = 870811594917404858ULL;
long long int var_28 = 3753231475757149517LL;
long long int var_29 = 7147870405592238096LL;
short var_30 = (short)8634;
_Bool arr_0 [16] ;
long long int arr_4 [16] [16] ;
long long int arr_5 [16] ;
signed char arr_6 [16] ;
short arr_7 [16] ;
long long int arr_9 [16] [16] ;
_Bool arr_10 [16] ;
short arr_2 [16] ;
long long int arr_3 [16] [16] ;
long long int arr_8 [16] ;
_Bool arr_11 [16] ;
short arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -7668258612529142817LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 4056132962925714749LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)14818;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = 4044196012127122035LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)13011;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1085008634282977257LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 1234527281058891557LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (short)-12112;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
