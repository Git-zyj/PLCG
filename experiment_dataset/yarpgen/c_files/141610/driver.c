#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
unsigned short var_2 = (unsigned short)57995;
short var_5 = (short)-12848;
unsigned short var_7 = (unsigned short)18673;
unsigned short var_8 = (unsigned short)15987;
signed char var_9 = (signed char)-5;
int zero = 0;
signed char var_11 = (signed char)4;
unsigned short var_12 = (unsigned short)42297;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)5134;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-22100;
unsigned short var_17 = (unsigned short)61715;
unsigned short arr_0 [18] ;
short arr_1 [18] [18] ;
short arr_2 [18] ;
_Bool arr_3 [18] ;
short arr_4 [18] ;
_Bool arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)20823;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)21260;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-10099;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)6147;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
