#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)46;
int var_8 = -496392979;
short var_9 = (short)17333;
long long int var_11 = 1975114649720618098LL;
int zero = 0;
signed char var_12 = (signed char)-11;
_Bool var_13 = (_Bool)0;
long long int var_14 = 1339675772980050151LL;
unsigned short var_15 = (unsigned short)19867;
long long int var_16 = 5954264135304487816LL;
unsigned int arr_0 [16] [16] ;
unsigned int arr_2 [16] ;
_Bool arr_5 [16] ;
int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 4115950687U : 2464402152U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3159787537U : 1018447102U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 368669933;
}

void checksum() {
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
