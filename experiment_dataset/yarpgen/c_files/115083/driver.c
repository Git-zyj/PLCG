#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)7094;
unsigned long long int var_10 = 3262764777132448125ULL;
unsigned long long int var_11 = 14874256785040625069ULL;
unsigned long long int var_12 = 14952498818038278889ULL;
short var_13 = (short)-9771;
unsigned long long int var_14 = 7253117897177360949ULL;
short var_17 = (short)-13949;
int zero = 0;
unsigned short var_18 = (unsigned short)44186;
unsigned long long int var_19 = 17793477295656282859ULL;
signed char var_20 = (signed char)-8;
unsigned short var_21 = (unsigned short)40674;
signed char var_22 = (signed char)-35;
unsigned short var_23 = (unsigned short)1415;
unsigned long long int var_24 = 14311083616935816748ULL;
signed char arr_0 [18] ;
unsigned short arr_1 [18] [18] ;
unsigned short arr_4 [22] ;
unsigned short arr_5 [22] ;
short arr_6 [22] ;
unsigned short arr_2 [18] ;
short arr_3 [18] [18] ;
unsigned short arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)18936;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52291 : (unsigned short)23745;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)17863;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)225;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)63477;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)2903;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)44687 : (unsigned short)49782;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
