#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
signed char var_1 = (signed char)-36;
unsigned int var_2 = 2183041816U;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 4031913383U;
unsigned char var_6 = (unsigned char)242;
signed char var_9 = (signed char)99;
unsigned long long int var_10 = 5172520059354348038ULL;
int zero = 0;
signed char var_11 = (signed char)80;
short var_12 = (short)21937;
short var_13 = (short)10787;
_Bool var_14 = (_Bool)1;
int var_15 = -873781198;
unsigned long long int var_16 = 11960495586119969125ULL;
unsigned int var_17 = 2262859658U;
unsigned int var_18 = 3768549222U;
signed char var_19 = (signed char)107;
unsigned int var_20 = 434558563U;
signed char var_21 = (signed char)126;
unsigned char var_22 = (unsigned char)57;
unsigned int var_23 = 693433943U;
unsigned char var_24 = (unsigned char)18;
short arr_1 [11] ;
short arr_3 [22] [22] ;
signed char arr_4 [22] ;
unsigned int arr_7 [15] ;
unsigned long long int arr_8 [15] [15] ;
unsigned int arr_11 [15] [15] [15] ;
long long int arr_13 [15] [15] ;
_Bool arr_15 [15] ;
unsigned char arr_19 [15] ;
signed char arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-21990;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)20213 : (short)25629;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)76 : (signed char)-80;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 3619988831U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 13119653506958921264ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 355659025U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = 132624643725451342LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)73 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-91 : (signed char)-59;
}

void checksum() {
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
