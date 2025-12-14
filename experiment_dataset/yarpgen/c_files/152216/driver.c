#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned long long int var_2 = 8437755561820831855ULL;
unsigned char var_3 = (unsigned char)98;
unsigned int var_4 = 1938143017U;
unsigned long long int var_5 = 5845512525283243162ULL;
int var_6 = -564433322;
unsigned short var_7 = (unsigned short)16264;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)47;
unsigned long long int var_12 = 14110287981403046623ULL;
int zero = 0;
short var_13 = (short)-11344;
long long int var_14 = -6942820774871740526LL;
unsigned short var_15 = (unsigned short)26188;
int var_16 = 860762153;
unsigned long long int var_17 = 16726775209201311246ULL;
unsigned long long int var_18 = 167124783881441283ULL;
unsigned short var_19 = (unsigned short)42866;
unsigned long long int var_20 = 102620526054488278ULL;
long long int var_21 = 5821609700326961177LL;
unsigned long long int var_22 = 12293062836062130460ULL;
unsigned int var_23 = 218315419U;
signed char var_24 = (signed char)4;
unsigned int var_25 = 40774695U;
short var_26 = (short)30051;
short var_27 = (short)16727;
short var_28 = (short)-6546;
short var_29 = (short)-32342;
unsigned char var_30 = (unsigned char)69;
unsigned long long int arr_0 [10] ;
unsigned short arr_1 [10] ;
short arr_3 [10] ;
unsigned int arr_5 [10] ;
long long int arr_6 [10] ;
short arr_10 [13] [13] ;
signed char arr_11 [13] [13] [13] ;
short arr_13 [13] [13] [13] ;
unsigned char arr_22 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 11777219608636146120ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)2776;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-3246;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 1770355633U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -4356056778090729302LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (short)9896;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)20271;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (unsigned char)182;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
