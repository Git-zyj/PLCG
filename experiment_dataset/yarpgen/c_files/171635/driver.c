#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32100;
signed char var_3 = (signed char)-6;
unsigned char var_5 = (unsigned char)57;
unsigned int var_7 = 819310723U;
_Bool var_8 = (_Bool)1;
signed char var_14 = (signed char)37;
int zero = 0;
int var_18 = -1600840855;
signed char var_19 = (signed char)76;
short var_20 = (short)-5093;
signed char var_21 = (signed char)-14;
signed char var_22 = (signed char)-118;
signed char var_23 = (signed char)-37;
unsigned short var_24 = (unsigned short)29092;
unsigned int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
int arr_2 [15] [15] ;
unsigned short arr_5 [12] [12] ;
int arr_6 [12] ;
short arr_10 [23] ;
short arr_14 [15] ;
unsigned short arr_16 [15] ;
short arr_3 [15] ;
int arr_4 [15] ;
short arr_8 [12] ;
int arr_12 [23] ;
unsigned short arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1068697032U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 10209165623017885110ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 663233885;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)6991;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1023977828;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (short)16885;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (short)-17187;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22818 : (unsigned short)25305;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)15495;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1963117832;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)21141;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -227663446;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45079 : (unsigned short)35872;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
