#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4022779913942786229ULL;
short var_1 = (short)8402;
signed char var_3 = (signed char)85;
unsigned char var_4 = (unsigned char)16;
unsigned long long int var_5 = 10429791467291569679ULL;
unsigned char var_7 = (unsigned char)168;
short var_8 = (short)5350;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-26;
signed char var_12 = (signed char)-117;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15477600735283459421ULL;
short var_18 = (short)-19698;
int zero = 0;
unsigned char var_19 = (unsigned char)27;
short var_20 = (short)7392;
long long int var_21 = 5448007103260990225LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)24335;
signed char arr_0 [15] ;
short arr_2 [15] [15] ;
unsigned long long int arr_3 [15] [15] ;
short arr_4 [15] [15] ;
unsigned short arr_5 [15] [15] [15] ;
long long int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)24663;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 3524628380342822647ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-30160;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)48075;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1124391794455656644LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
