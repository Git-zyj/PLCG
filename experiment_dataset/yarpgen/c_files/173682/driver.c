#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
unsigned long long int var_4 = 3410440139484466439ULL;
unsigned short var_5 = (unsigned short)3585;
short var_7 = (short)21476;
unsigned short var_8 = (unsigned short)5500;
int var_9 = -2126168493;
unsigned short var_10 = (unsigned short)42609;
short var_11 = (short)30764;
int zero = 0;
unsigned int var_14 = 906955870U;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)56913;
int var_17 = -2063392487;
unsigned short var_18 = (unsigned short)39932;
unsigned short var_19 = (unsigned short)19886;
signed char var_20 = (signed char)93;
int var_21 = 1167048744;
int var_22 = -1469530299;
short arr_2 [13] ;
int arr_3 [12] ;
unsigned int arr_8 [12] ;
int arr_9 [12] [12] ;
unsigned long long int arr_13 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)30332;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1317652648;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 1096355073U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = -810127388;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = 15655479982528631305ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
