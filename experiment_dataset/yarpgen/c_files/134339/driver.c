#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)43;
short var_4 = (short)-18087;
int var_5 = 1112074362;
unsigned char var_8 = (unsigned char)16;
_Bool var_12 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)20827;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13858958268458832575ULL;
short var_21 = (short)25962;
signed char arr_0 [16] [16] ;
int arr_1 [16] ;
int arr_2 [16] [16] ;
long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -1841612089;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1295368526;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -4650106773395197246LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
