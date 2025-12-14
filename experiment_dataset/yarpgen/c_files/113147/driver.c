#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11160611758282579814ULL;
unsigned short var_2 = (unsigned short)49035;
signed char var_3 = (signed char)73;
int var_8 = -1845340102;
int var_9 = 1110415132;
signed char var_11 = (signed char)127;
int var_13 = 1874036670;
int zero = 0;
unsigned int var_14 = 2978945125U;
unsigned short var_15 = (unsigned short)17713;
signed char var_16 = (signed char)86;
signed char var_17 = (signed char)-8;
long long int var_18 = -3144321824337400621LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
int var_21 = 1745708664;
short arr_1 [18] [18] ;
unsigned char arr_2 [18] [18] ;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-7542;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2724146582620313742ULL : 2307405147134290745ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
