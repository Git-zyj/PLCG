#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)90;
unsigned int var_4 = 1605121998U;
unsigned short var_7 = (unsigned short)15934;
unsigned int var_9 = 3983830380U;
long long int var_10 = -8148393301437725496LL;
unsigned int var_11 = 2438893291U;
unsigned int var_12 = 2722472909U;
long long int var_14 = -3038505017285612244LL;
int zero = 0;
signed char var_16 = (signed char)121;
short var_17 = (short)19032;
unsigned short var_18 = (unsigned short)24338;
int var_19 = -1664818154;
unsigned char var_20 = (unsigned char)73;
unsigned long long int var_21 = 11824362225030669944ULL;
unsigned int var_22 = 1982574820U;
unsigned long long int arr_0 [10] ;
unsigned int arr_3 [10] ;
signed char arr_6 [12] [12] ;
unsigned long long int arr_7 [12] ;
unsigned char arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 14563567977419187671ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3332519600U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 14158423716328691321ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
