#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)52;
unsigned int var_8 = 330029659U;
int var_10 = 1687619495;
unsigned short var_13 = (unsigned short)40198;
short var_14 = (short)12135;
short var_16 = (short)27473;
int var_18 = 2087857186;
int zero = 0;
signed char var_19 = (signed char)93;
signed char var_20 = (signed char)-99;
unsigned short var_21 = (unsigned short)64705;
unsigned int var_22 = 3271374349U;
unsigned int var_23 = 512160556U;
unsigned char arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)180 : (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1938585320U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)101 : (signed char)49;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
