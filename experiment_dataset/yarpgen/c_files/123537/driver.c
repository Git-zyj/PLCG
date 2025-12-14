#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -561881468;
unsigned int var_4 = 1009281080U;
unsigned int var_6 = 3284845597U;
unsigned short var_10 = (unsigned short)56881;
unsigned short var_12 = (unsigned short)2872;
unsigned short var_13 = (unsigned short)5132;
signed char var_14 = (signed char)38;
signed char var_15 = (signed char)32;
int var_16 = -546605579;
int zero = 0;
int var_17 = -1863458144;
int var_18 = -1055825790;
short var_19 = (short)31796;
long long int var_20 = -2834970716022379494LL;
int var_21 = -1317949498;
signed char var_22 = (signed char)60;
signed char var_23 = (signed char)-3;
unsigned char arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
int arr_3 [19] ;
signed char arr_4 [19] ;
signed char arr_10 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)61 : (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)39909;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 514065114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)-45;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)127 : (signed char)-91;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
