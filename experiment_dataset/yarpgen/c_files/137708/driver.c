#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2458539477059639967ULL;
unsigned int var_1 = 3970560686U;
unsigned char var_2 = (unsigned char)100;
unsigned char var_5 = (unsigned char)177;
unsigned int var_6 = 165999488U;
unsigned short var_7 = (unsigned short)23228;
signed char var_8 = (signed char)-124;
unsigned int var_9 = 2155055974U;
unsigned short var_10 = (unsigned short)64666;
int zero = 0;
short var_11 = (short)20945;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)51;
unsigned char var_14 = (unsigned char)97;
unsigned int var_15 = 447261888U;
unsigned short var_16 = (unsigned short)21175;
short arr_0 [11] ;
unsigned short arr_2 [11] ;
unsigned char arr_3 [11] ;
short arr_4 [11] [11] ;
short arr_5 [11] ;
int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-15321;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)35614;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)23514 : (short)15661;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)15748 : (short)-24918;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -637947683;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
