#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4170573020U;
unsigned short var_4 = (unsigned short)59713;
unsigned long long int var_5 = 981664506417042043ULL;
long long int var_6 = -8460199484875664820LL;
signed char var_8 = (signed char)-102;
unsigned short var_10 = (unsigned short)61243;
long long int var_11 = -2995978677722741693LL;
long long int var_13 = 4188266485037637050LL;
int zero = 0;
unsigned short var_15 = (unsigned short)45725;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-36;
unsigned short arr_2 [14] ;
unsigned short arr_3 [14] ;
unsigned char arr_4 [14] [14] ;
unsigned short arr_5 [14] ;
signed char arr_6 [14] [14] ;
unsigned int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32826 : (unsigned short)15618;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28610 : (unsigned short)55188;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)55068;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-114 : (signed char)-79;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2850616152U : 583586435U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
