#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1912870208;
long long int var_1 = 7630636548362504636LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 7987348250155045525LL;
unsigned char var_5 = (unsigned char)242;
unsigned long long int var_6 = 3212657672678512738ULL;
int var_7 = -1966204569;
signed char var_8 = (signed char)-4;
long long int var_9 = -7554528054325332138LL;
int zero = 0;
unsigned long long int var_10 = 1770501979116581634ULL;
unsigned long long int var_11 = 11400571685835020803ULL;
long long int var_12 = -4899358409177206031LL;
signed char var_13 = (signed char)-88;
unsigned long long int var_14 = 13432896298098997084ULL;
short var_15 = (short)694;
unsigned int var_16 = 1357846063U;
unsigned char var_17 = (unsigned char)124;
unsigned int var_18 = 798698103U;
unsigned short var_19 = (unsigned short)19100;
unsigned short arr_0 [13] [13] ;
short arr_2 [13] [13] ;
unsigned char arr_6 [10] [10] ;
unsigned short arr_7 [10] ;
unsigned short arr_12 [10] [10] ;
unsigned long long int arr_4 [13] [13] ;
int arr_8 [10] ;
unsigned short arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)15291 : (unsigned short)31701;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-11027;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)5146;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)10805;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 2410076323234006546ULL : 2444904836825850ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1836153415;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned short)56777;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
