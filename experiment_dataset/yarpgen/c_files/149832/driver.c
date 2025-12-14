#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2041840911U;
unsigned long long int var_1 = 12175998562594573553ULL;
unsigned short var_2 = (unsigned short)31017;
unsigned char var_3 = (unsigned char)159;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 10534493025226642197ULL;
unsigned int var_6 = 2557882692U;
unsigned int var_7 = 1622389230U;
unsigned long long int var_8 = 16686863936141677037ULL;
unsigned long long int var_9 = 11020459772824520864ULL;
int zero = 0;
short var_10 = (short)-28463;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-80;
_Bool var_13 = (_Bool)0;
int var_14 = -1751898118;
unsigned short var_15 = (unsigned short)36556;
unsigned short var_16 = (unsigned short)59119;
int var_17 = -80121294;
unsigned int var_18 = 1323473574U;
unsigned long long int var_19 = 10585776644693990477ULL;
unsigned long long int arr_12 [11] [11] ;
int arr_20 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 461423365252215426ULL : 14730207667998244815ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 1873197695 : -27095947;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
