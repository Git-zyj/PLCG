#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20615;
unsigned short var_2 = (unsigned short)21381;
unsigned short var_5 = (unsigned short)59888;
signed char var_6 = (signed char)-6;
signed char var_7 = (signed char)104;
short var_9 = (short)1490;
unsigned long long int var_13 = 15543188873867950280ULL;
unsigned short var_16 = (unsigned short)32752;
int zero = 0;
unsigned short var_18 = (unsigned short)35859;
short var_19 = (short)-23940;
unsigned short var_20 = (unsigned short)31029;
short var_21 = (short)-21254;
int var_22 = 246982958;
short var_23 = (short)-7171;
int arr_1 [20] ;
unsigned long long int arr_5 [15] ;
int arr_7 [15] [15] ;
unsigned char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -873967658;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6951140729354810982ULL : 5175278271149004398ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 940681508;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)59 : (unsigned char)158;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
