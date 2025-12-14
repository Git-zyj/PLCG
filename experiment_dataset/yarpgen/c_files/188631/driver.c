#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1055293179;
unsigned char var_3 = (unsigned char)100;
unsigned long long int var_6 = 9342594375696899702ULL;
int var_9 = -620166953;
short var_12 = (short)-20440;
unsigned int var_13 = 1686913885U;
long long int var_14 = -9173844712657590066LL;
int zero = 0;
unsigned char var_19 = (unsigned char)87;
unsigned short var_20 = (unsigned short)5289;
signed char var_21 = (signed char)91;
unsigned int var_22 = 1190312443U;
short var_23 = (short)18811;
unsigned int var_24 = 520480438U;
signed char var_25 = (signed char)49;
unsigned char var_26 = (unsigned char)232;
_Bool var_27 = (_Bool)0;
signed char arr_0 [20] [20] ;
signed char arr_1 [20] ;
signed char arr_2 [20] ;
unsigned char arr_3 [20] [20] [20] ;
long long int arr_4 [20] [20] [20] ;
long long int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -3523998830295154644LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -4524003941526809707LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
