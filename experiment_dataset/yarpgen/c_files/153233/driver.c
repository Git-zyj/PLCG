#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21507;
short var_2 = (short)-27641;
unsigned long long int var_4 = 18131935407264703302ULL;
unsigned char var_5 = (unsigned char)170;
unsigned char var_8 = (unsigned char)45;
long long int var_9 = -2522748942690111387LL;
int zero = 0;
unsigned char var_10 = (unsigned char)115;
unsigned int var_11 = 4179848431U;
unsigned long long int var_12 = 4248241222381761326ULL;
long long int var_13 = 6111065830595271709LL;
signed char arr_1 [18] ;
long long int arr_2 [18] ;
unsigned char arr_3 [18] ;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)74 : (signed char)-111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -5339849014092972081LL : -2865993765116640284LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)51 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4932883651977077031ULL : 3450448199660968700ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
