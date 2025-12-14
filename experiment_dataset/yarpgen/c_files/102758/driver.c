#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1753173897;
unsigned short var_9 = (unsigned short)55740;
unsigned char var_10 = (unsigned char)187;
short var_11 = (short)-14653;
int zero = 0;
unsigned short var_12 = (unsigned short)25685;
signed char var_13 = (signed char)59;
unsigned short var_14 = (unsigned short)46587;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)8333;
unsigned short var_17 = (unsigned short)27939;
signed char var_18 = (signed char)-122;
signed char var_19 = (signed char)-116;
_Bool arr_0 [10] ;
long long int arr_2 [10] [10] ;
signed char arr_4 [12] ;
unsigned short arr_5 [12] ;
unsigned short arr_3 [10] ;
int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -4860407264559346354LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)7214;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)21077;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -308835296;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
