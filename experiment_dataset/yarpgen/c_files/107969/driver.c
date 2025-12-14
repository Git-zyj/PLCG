#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2259432777153795592ULL;
unsigned char var_2 = (unsigned char)155;
unsigned char var_6 = (unsigned char)180;
int var_7 = 706618985;
unsigned long long int var_8 = 6277365044598222532ULL;
unsigned long long int var_9 = 901924727385630933ULL;
unsigned long long int var_11 = 5618114344272868222ULL;
unsigned long long int var_12 = 11469152435576851774ULL;
unsigned char var_13 = (unsigned char)215;
unsigned short var_15 = (unsigned short)32479;
int zero = 0;
unsigned int var_17 = 1279896473U;
unsigned short var_18 = (unsigned short)51931;
int var_19 = 1532465687;
unsigned long long int var_20 = 14925816675495678781ULL;
long long int var_21 = -1498786608819543071LL;
unsigned short arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned short arr_2 [18] ;
signed char arr_4 [18] [18] [18] ;
int arr_5 [18] ;
unsigned short arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)44394;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)36014;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)45616;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -1786165212;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)55212;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
