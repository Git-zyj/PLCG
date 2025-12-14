#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5003;
long long int var_2 = -6690176715496378131LL;
int var_3 = 1277490040;
int var_4 = 1626611054;
int var_5 = -391706441;
long long int var_10 = 6361688463165755995LL;
unsigned long long int var_11 = 4164855790808161867ULL;
unsigned long long int var_12 = 9097453166488288203ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2492180925U;
long long int var_16 = 2527341667719808502LL;
unsigned long long int var_17 = 14545974452386885633ULL;
unsigned char arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
short arr_2 [14] [14] ;
short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)28282;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)5275;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-9767;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
