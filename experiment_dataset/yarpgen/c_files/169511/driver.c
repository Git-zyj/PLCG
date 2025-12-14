#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9252;
unsigned int var_4 = 4072003915U;
int var_5 = -1076076083;
unsigned long long int var_6 = 4132649626455537457ULL;
short var_12 = (short)-24443;
unsigned short var_13 = (unsigned short)6691;
unsigned char var_14 = (unsigned char)7;
unsigned char var_15 = (unsigned char)135;
int zero = 0;
unsigned int var_18 = 1290200339U;
unsigned long long int var_19 = 13392486689380085536ULL;
short var_20 = (short)-14451;
unsigned char var_21 = (unsigned char)199;
short arr_1 [25] ;
unsigned long long int arr_2 [25] ;
int arr_3 [25] ;
signed char arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-621;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3802093618435316003ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -677122470;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-9 : (signed char)-96;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
