#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2118017715734004940LL;
signed char var_11 = (signed char)63;
short var_12 = (short)-14867;
short var_15 = (short)11412;
unsigned int var_16 = 1683106073U;
int zero = 0;
long long int var_20 = 492572982559420223LL;
long long int var_21 = -1085311755948614190LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -5640856351729615072LL;
unsigned char var_24 = (unsigned char)95;
unsigned char var_25 = (unsigned char)239;
int var_26 = -1978558100;
unsigned char var_27 = (unsigned char)109;
long long int var_28 = 3870263542466386222LL;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)176;
unsigned short var_31 = (unsigned short)27670;
long long int var_32 = 638366236266682372LL;
signed char arr_0 [13] [13] ;
long long int arr_1 [13] ;
_Bool arr_2 [13] ;
unsigned long long int arr_4 [18] ;
short arr_5 [18] [18] ;
int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -8835994175346824921LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4371456746887271258ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-500;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -167659330;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
