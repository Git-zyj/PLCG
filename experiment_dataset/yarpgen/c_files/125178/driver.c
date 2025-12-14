#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 617142860;
unsigned char var_1 = (unsigned char)164;
int var_2 = -837624619;
unsigned char var_8 = (unsigned char)77;
short var_9 = (short)-10942;
short var_13 = (short)-27020;
int zero = 0;
long long int var_15 = -1779048086895602216LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 869736013U;
unsigned char var_18 = (unsigned char)140;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)213;
unsigned long long int var_21 = 4143820925571091523ULL;
short var_22 = (short)-365;
short var_23 = (short)26068;
unsigned char var_24 = (unsigned char)4;
unsigned int arr_1 [13] ;
unsigned int arr_6 [13] ;
unsigned short arr_7 [13] [13] ;
unsigned char arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3430738569U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3777589628U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)21674 : (unsigned short)56347;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)26;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
