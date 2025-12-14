#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)197;
unsigned char var_8 = (unsigned char)95;
long long int var_11 = 2791019280639458642LL;
short var_13 = (short)-19448;
unsigned short var_14 = (unsigned short)16315;
unsigned short var_15 = (unsigned short)24922;
int zero = 0;
unsigned short var_16 = (unsigned short)4781;
int var_17 = 334706597;
unsigned short var_18 = (unsigned short)13486;
signed char var_19 = (signed char)71;
short var_20 = (short)-447;
short var_21 = (short)14510;
unsigned short var_22 = (unsigned short)27452;
int var_23 = -864579178;
unsigned short arr_0 [18] [18] ;
long long int arr_2 [18] ;
int arr_3 [18] ;
int arr_4 [18] ;
int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)6845 : (unsigned short)14313;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3835660375642198759LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1826177784 : 745182651;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1071951875;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -1551035910;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
