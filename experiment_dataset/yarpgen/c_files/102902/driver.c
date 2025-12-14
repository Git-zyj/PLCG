#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3088998809U;
short var_2 = (short)-7765;
int var_3 = 1494086839;
long long int var_6 = -3144463384420667605LL;
long long int var_7 = -2391020301018883274LL;
unsigned int var_8 = 19518273U;
unsigned int var_12 = 4020398788U;
short var_16 = (short)14609;
int zero = 0;
signed char var_17 = (signed char)55;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3919570536U;
unsigned char var_20 = (unsigned char)140;
signed char var_21 = (signed char)-75;
signed char var_22 = (signed char)69;
short var_23 = (short)7763;
signed char arr_5 [24] ;
long long int arr_8 [17] ;
unsigned short arr_9 [17] [17] ;
int arr_6 [24] ;
short arr_11 [17] [17] [17] ;
signed char arr_12 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -496342657079130517LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)60093;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 200201709 : -65300659;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)32657;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (signed char)14;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
