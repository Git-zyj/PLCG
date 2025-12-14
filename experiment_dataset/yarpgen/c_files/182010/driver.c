#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1490431890;
long long int var_2 = -7240395770373609856LL;
signed char var_3 = (signed char)17;
signed char var_4 = (signed char)6;
int var_5 = -2131290578;
unsigned short var_6 = (unsigned short)62711;
int var_7 = -768275058;
unsigned short var_8 = (unsigned short)51905;
int var_9 = 885599663;
unsigned char var_10 = (unsigned char)222;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-48;
int var_13 = 1714941819;
int var_14 = -366922015;
long long int var_15 = 1161949167122567830LL;
signed char var_16 = (signed char)-25;
int zero = 0;
unsigned char var_17 = (unsigned char)93;
signed char var_18 = (signed char)-16;
long long int var_19 = -6732670711630071786LL;
unsigned long long int var_20 = 5717752276194756896ULL;
int var_21 = -1552131399;
unsigned char var_22 = (unsigned char)56;
long long int var_23 = 3131601151733142377LL;
unsigned short arr_2 [16] [16] ;
unsigned short arr_7 [10] ;
int arr_14 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)48057;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)63649;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = -27109959;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
