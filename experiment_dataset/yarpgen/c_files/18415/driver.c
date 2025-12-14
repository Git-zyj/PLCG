#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5074;
long long int var_2 = -5118819032438695819LL;
int var_3 = 784916454;
unsigned long long int var_5 = 11468327996127526098ULL;
int var_6 = -1486550486;
unsigned long long int var_7 = 147877041198057317ULL;
unsigned short var_8 = (unsigned short)64323;
short var_9 = (short)11505;
int var_10 = -1275818135;
signed char var_11 = (signed char)-18;
short var_12 = (short)24865;
unsigned int var_14 = 1896405676U;
unsigned char var_15 = (unsigned char)8;
long long int var_16 = -7731986000165170138LL;
unsigned char var_17 = (unsigned char)170;
unsigned long long int var_18 = 7537466052405539241ULL;
int var_19 = -1231314555;
int zero = 0;
unsigned short var_20 = (unsigned short)64420;
short var_21 = (short)-19916;
unsigned short var_22 = (unsigned short)7655;
unsigned long long int var_23 = 13471216441046415496ULL;
short var_24 = (short)24798;
unsigned long long int var_25 = 6200535990759930145ULL;
long long int var_26 = -8095414503367619480LL;
short var_27 = (short)-31736;
long long int var_28 = -7889119011210270705LL;
unsigned char var_29 = (unsigned char)96;
unsigned char var_30 = (unsigned char)104;
unsigned long long int var_31 = 12147801112922962633ULL;
long long int var_32 = -6050723200780056904LL;
unsigned int var_33 = 1717638694U;
long long int var_34 = -2596433804397111667LL;
long long int var_35 = 7923882252431086275LL;
unsigned short var_36 = (unsigned short)52629;
short var_37 = (short)31916;
short var_38 = (short)-7111;
_Bool var_39 = (_Bool)1;
short var_40 = (short)27326;
unsigned char var_41 = (unsigned char)163;
unsigned char var_42 = (unsigned char)27;
long long int arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
short arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
long long int arr_4 [23] [23] ;
unsigned char arr_5 [23] [23] ;
short arr_6 [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
unsigned char arr_8 [23] [23] [23] ;
unsigned long long int arr_9 [23] [23] [23] ;
signed char arr_10 [23] ;
short arr_11 [23] [23] ;
unsigned char arr_20 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 8911402878499463148LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)35194;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)3506;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -4619830229573701840LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)3090;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 9212204360794136367ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3765559273233637068ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-26377;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (unsigned char)101;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
