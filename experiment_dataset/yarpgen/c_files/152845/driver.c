#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14467;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 814258029U;
long long int var_3 = -3985850438428983233LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-31902;
long long int var_10 = 13445749948581566LL;
unsigned short var_12 = (unsigned short)21613;
unsigned char var_13 = (unsigned char)11;
int zero = 0;
signed char var_14 = (signed char)-76;
unsigned long long int var_15 = 17741602858056206027ULL;
unsigned short var_16 = (unsigned short)7688;
unsigned long long int arr_2 [12] ;
unsigned short arr_3 [12] ;
short arr_7 [25] ;
_Bool arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 16136355524552579156ULL : 5393100848177022751ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42226 : (unsigned short)51477;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)15912 : (short)-5520;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
