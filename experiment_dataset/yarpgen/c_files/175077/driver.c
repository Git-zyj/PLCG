#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)124;
unsigned short var_2 = (unsigned short)59694;
unsigned char var_4 = (unsigned char)93;
unsigned int var_5 = 1003623387U;
unsigned char var_6 = (unsigned char)249;
long long int var_7 = 8911021926268343505LL;
int var_8 = -962696050;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-5;
unsigned short var_15 = (unsigned short)42401;
signed char var_16 = (signed char)57;
int zero = 0;
short var_17 = (short)-15194;
signed char var_18 = (signed char)23;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-101;
_Bool var_21 = (_Bool)0;
short arr_0 [12] ;
unsigned char arr_1 [12] ;
unsigned char arr_4 [22] [22] ;
long long int arr_6 [22] ;
unsigned short arr_2 [12] ;
unsigned char arr_3 [12] ;
unsigned char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-17979;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -2916430522727074554LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)1314;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)118;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
