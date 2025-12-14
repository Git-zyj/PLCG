#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -476492823;
signed char var_6 = (signed char)-91;
short var_7 = (short)-18593;
unsigned short var_11 = (unsigned short)141;
_Bool var_12 = (_Bool)1;
long long int var_14 = 483935906945686756LL;
signed char var_16 = (signed char)72;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)42;
short var_20 = (short)-30855;
short var_21 = (short)-10825;
signed char var_22 = (signed char)-123;
_Bool var_23 = (_Bool)1;
long long int var_24 = -7339297208341730647LL;
signed char var_25 = (signed char)-26;
int var_26 = 233135183;
int var_27 = 1374146997;
long long int var_28 = 4300716922864200532LL;
long long int var_29 = -2645572307052886081LL;
unsigned char var_30 = (unsigned char)52;
signed char arr_0 [13] [13] ;
short arr_1 [13] [13] ;
int arr_3 [17] ;
unsigned short arr_4 [17] ;
int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)26654;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1818498331;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)53894;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -514307358;
}

void checksum() {
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
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
