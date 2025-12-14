#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
signed char var_3 = (signed char)30;
short var_5 = (short)3557;
short var_6 = (short)30436;
signed char var_8 = (signed char)80;
signed char var_9 = (signed char)84;
signed char var_10 = (signed char)-15;
unsigned int var_11 = 834417181U;
short var_14 = (short)-30518;
unsigned int var_15 = 2468644019U;
int zero = 0;
unsigned int var_17 = 3284615602U;
unsigned int var_18 = 2698256610U;
unsigned int var_19 = 3630261076U;
unsigned int var_20 = 1365937262U;
short var_21 = (short)5228;
unsigned int var_22 = 2845238663U;
unsigned int var_23 = 2360412303U;
signed char var_24 = (signed char)-9;
short var_25 = (short)15081;
unsigned int var_26 = 3471950179U;
unsigned int var_27 = 1977529348U;
short var_28 = (short)8409;
unsigned int arr_0 [18] ;
short arr_1 [18] ;
short arr_9 [13] [13] ;
short arr_10 [13] ;
short arr_13 [24] ;
unsigned int arr_15 [24] ;
short arr_16 [24] ;
unsigned int arr_17 [24] [24] [24] ;
unsigned int arr_2 [18] [18] ;
unsigned int arr_12 [13] [13] ;
signed char arr_18 [24] [24] ;
short arr_19 [24] [24] [24] ;
signed char arr_20 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 946948713U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-1139;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (short)9934;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (short)-21240;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (short)26093;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 4008459412U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-20722 : (short)-12520;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 4173693868U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 3833211606U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 3397488991U : 3273304679U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-17 : (signed char)-75;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)12556 : (short)-7193;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (signed char)106;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
