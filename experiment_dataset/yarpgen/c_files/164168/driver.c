#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
short var_2 = (short)-30906;
short var_3 = (short)18391;
unsigned int var_6 = 3337936985U;
short var_7 = (short)-5113;
_Bool var_9 = (_Bool)1;
long long int var_11 = 1428727055611080057LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)6;
long long int var_17 = 5901980503788753386LL;
unsigned char var_18 = (unsigned char)172;
long long int var_19 = -1551537194946461034LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
int arr_0 [11] ;
short arr_1 [11] ;
unsigned int arr_3 [11] [11] ;
unsigned char arr_4 [11] [11] ;
signed char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 281061906;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)15530;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 4020088060U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)52;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
