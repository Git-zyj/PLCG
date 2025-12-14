#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6306;
unsigned char var_4 = (unsigned char)4;
unsigned char var_8 = (unsigned char)55;
unsigned int var_11 = 1728691211U;
long long int var_13 = 5520547522518578280LL;
short var_14 = (short)-2345;
signed char var_15 = (signed char)38;
unsigned short var_16 = (unsigned short)18732;
int zero = 0;
unsigned short var_18 = (unsigned short)15604;
unsigned short var_19 = (unsigned short)40835;
signed char var_20 = (signed char)-96;
unsigned char var_21 = (unsigned char)173;
unsigned short arr_0 [14] ;
int arr_6 [14] ;
int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)39446;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 342307105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -759947965 : 892144012;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
