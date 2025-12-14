#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13763812967790929594ULL;
unsigned long long int var_1 = 11354805265504798525ULL;
unsigned long long int var_2 = 1645474894007673107ULL;
unsigned char var_6 = (unsigned char)182;
unsigned short var_8 = (unsigned short)50517;
signed char var_11 = (signed char)-20;
int zero = 0;
signed char var_15 = (signed char)-64;
short var_16 = (short)4139;
short var_17 = (short)8284;
unsigned long long int var_18 = 14836445772208922706ULL;
short var_19 = (short)-5905;
unsigned short var_20 = (unsigned short)25231;
short var_21 = (short)14534;
signed char var_22 = (signed char)79;
signed char var_23 = (signed char)-42;
unsigned long long int var_24 = 4955571259524495731ULL;
unsigned short arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
unsigned short arr_3 [18] ;
short arr_4 [18] [18] ;
int arr_5 [18] ;
signed char arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)9380;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)5488;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)14592;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-8945;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1906310595;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)73;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
