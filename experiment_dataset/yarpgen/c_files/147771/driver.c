#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14840984024652467437ULL;
unsigned short var_1 = (unsigned short)53557;
unsigned char var_2 = (unsigned char)222;
long long int var_4 = -7220173952739599771LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_7 = -8583584371510686067LL;
short var_8 = (short)32534;
long long int var_9 = 3822317365151364496LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)7342;
int var_12 = 754943799;
short var_13 = (short)696;
unsigned char var_14 = (unsigned char)94;
unsigned short var_15 = (unsigned short)26410;
short var_16 = (short)6256;
short var_17 = (short)-29872;
unsigned char var_18 = (unsigned char)221;
unsigned short var_19 = (unsigned short)49294;
long long int var_20 = -2796863040532136957LL;
unsigned short arr_6 [21] [21] ;
_Bool arr_7 [21] [21] ;
unsigned char arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35913 : (unsigned short)12206;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned char)75;
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
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
