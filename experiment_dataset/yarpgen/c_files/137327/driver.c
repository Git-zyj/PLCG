#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
unsigned short var_2 = (unsigned short)17537;
unsigned char var_3 = (unsigned char)26;
int var_4 = -1373195524;
long long int var_5 = -6738472899621098515LL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)33;
short var_9 = (short)-18711;
signed char var_12 = (signed char)44;
int var_13 = -390262038;
int zero = 0;
signed char var_14 = (signed char)90;
signed char var_15 = (signed char)-58;
int var_16 = -1310872373;
unsigned char var_17 = (unsigned char)178;
unsigned char arr_3 [12] ;
long long int arr_5 [24] ;
short arr_6 [24] ;
unsigned short arr_4 [12] ;
unsigned short arr_7 [24] [24] ;
unsigned short arr_8 [24] ;
long long int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 5537421510758509144LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)28590 : (short)19457;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12790 : (unsigned short)49810;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)21504 : (unsigned short)44765;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54251 : (unsigned short)9723;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -4144810884333850330LL : 9083985646961335857LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
