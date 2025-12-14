#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45566;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)30522;
unsigned short var_3 = (unsigned short)28465;
unsigned short var_5 = (unsigned short)45685;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)27722;
long long int var_8 = 4295136423611745256LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)-7166;
int var_11 = -430567836;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)197;
unsigned short var_14 = (unsigned short)37705;
unsigned int var_15 = 3036188068U;
unsigned char var_16 = (unsigned char)82;
unsigned short arr_0 [25] [25] ;
_Bool arr_1 [25] [25] ;
unsigned char arr_4 [23] ;
unsigned short arr_5 [23] ;
long long int arr_3 [25] ;
_Bool arr_7 [23] ;
signed char arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)15184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41100 : (unsigned short)61301;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1199072168572903642LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-97 : (signed char)80;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
