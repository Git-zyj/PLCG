#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
unsigned int var_4 = 3225517613U;
signed char var_5 = (signed char)27;
unsigned char var_7 = (unsigned char)129;
int var_10 = -2139088658;
long long int var_11 = 6596810527441534214LL;
int var_12 = 1045159805;
unsigned long long int var_14 = 17076063294147939781ULL;
signed char var_15 = (signed char)-104;
int var_16 = 830318170;
int var_17 = -407385502;
signed char var_18 = (signed char)-64;
int zero = 0;
short var_19 = (short)-17651;
long long int var_20 = 6350177426157814027LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3521035417U;
signed char arr_0 [24] [24] ;
unsigned long long int arr_1 [24] [24] ;
unsigned long long int arr_6 [24] [24] ;
unsigned long long int arr_2 [24] ;
unsigned char arr_3 [24] [24] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 4312222943732984269ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 14850089549087274757ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 12014130480224787166ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 13494065246259100491ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
