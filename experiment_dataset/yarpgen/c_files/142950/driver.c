#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16799476016567579570ULL;
unsigned int var_2 = 4230712973U;
unsigned int var_3 = 869766018U;
unsigned char var_6 = (unsigned char)181;
unsigned char var_8 = (unsigned char)182;
unsigned int var_9 = 1136626455U;
_Bool var_10 = (_Bool)0;
long long int var_11 = -5697816031322692393LL;
unsigned long long int var_13 = 17076041649085121556ULL;
unsigned char var_15 = (unsigned char)233;
int zero = 0;
unsigned char var_16 = (unsigned char)202;
signed char var_17 = (signed char)-9;
short var_18 = (short)6990;
int var_19 = 1880565129;
_Bool var_20 = (_Bool)0;
short arr_0 [25] [25] ;
signed char arr_1 [25] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-32203;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 4146082915U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
