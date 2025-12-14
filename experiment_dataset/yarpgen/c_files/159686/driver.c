#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1146807869;
unsigned char var_2 = (unsigned char)22;
unsigned int var_4 = 2928295833U;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)58;
int zero = 0;
unsigned short var_12 = (unsigned short)35847;
unsigned short var_13 = (unsigned short)12690;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)88;
unsigned long long int var_16 = 18438913222554632687ULL;
int var_17 = 221859611;
_Bool var_18 = (_Bool)0;
unsigned char arr_0 [16] ;
signed char arr_1 [16] ;
unsigned char arr_3 [15] ;
int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -1432154045;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
