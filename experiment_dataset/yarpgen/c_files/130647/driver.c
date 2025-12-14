#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3827728875454974526LL;
unsigned char var_3 = (unsigned char)100;
unsigned long long int var_4 = 15428653618059073545ULL;
unsigned long long int var_5 = 17317312914601819454ULL;
unsigned char var_7 = (unsigned char)225;
short var_9 = (short)10654;
int zero = 0;
short var_10 = (short)-15381;
signed char var_11 = (signed char)29;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1893553212221388528LL;
int var_14 = 1261261265;
short var_15 = (short)4750;
unsigned long long int var_16 = 8982612688803047831ULL;
unsigned char arr_1 [16] ;
int arr_3 [16] [16] ;
unsigned int arr_5 [23] ;
short arr_4 [16] ;
unsigned char arr_8 [23] ;
unsigned short arr_9 [23] ;
short arr_14 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -753025223;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 3975014290U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)9718 : (short)-16632;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)28870;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (short)31373;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
