#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)10647;
unsigned long long int var_4 = 8325717863613467546ULL;
unsigned long long int var_5 = 9873035584507464623ULL;
unsigned short var_7 = (unsigned short)5289;
_Bool var_10 = (_Bool)0;
long long int var_11 = -502305826012592558LL;
unsigned short var_14 = (unsigned short)21285;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)51281;
int zero = 0;
unsigned long long int var_17 = 17821124508265096392ULL;
unsigned long long int var_18 = 1027186503562685441ULL;
unsigned int var_19 = 1008226891U;
signed char var_20 = (signed char)-91;
unsigned int arr_1 [25] [25] ;
unsigned long long int arr_2 [25] [25] ;
signed char arr_5 [25] [25] [25] ;
unsigned char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 1093837957U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 5661192450996750674ULL : 256230911233133995ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)8;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
