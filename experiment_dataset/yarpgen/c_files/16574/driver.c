#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35842;
int var_4 = -2123871563;
int var_5 = 1333637049;
int var_6 = -1674241105;
long long int var_7 = 8400860894156764080LL;
unsigned long long int var_10 = 5185143864635999265ULL;
int var_11 = 1857756204;
unsigned short var_16 = (unsigned short)55752;
int zero = 0;
int var_17 = 849054367;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int var_20 = 1914948255;
unsigned long long int var_21 = 6663820723461766357ULL;
unsigned long long int var_22 = 1801763227775539239ULL;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-12613;
unsigned short var_25 = (unsigned short)3491;
short var_26 = (short)6887;
int var_27 = 1185371441;
unsigned short arr_0 [13] [13] ;
int arr_2 [13] [13] [13] ;
int arr_3 [13] [13] ;
int arr_5 [12] [12] ;
short arr_9 [12] ;
short arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)15044;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1606393143;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 381225570;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 1539206907;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (short)23624;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-31762 : (short)23530;
}

void checksum() {
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
