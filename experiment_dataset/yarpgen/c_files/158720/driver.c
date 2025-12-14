#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1466190893;
int var_2 = -242928405;
signed char var_3 = (signed char)17;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-5;
signed char var_8 = (signed char)37;
signed char var_9 = (signed char)-57;
int zero = 0;
long long int var_12 = 4243725986120110452LL;
long long int var_13 = 175512245428880645LL;
unsigned long long int var_14 = 4601348192044083322ULL;
unsigned short var_15 = (unsigned short)27791;
long long int var_16 = 7649752499016888300LL;
signed char var_17 = (signed char)-115;
short var_18 = (short)-13881;
long long int var_19 = 7659334142571210923LL;
signed char var_20 = (signed char)124;
short var_21 = (short)15170;
int var_22 = -1566129191;
signed char var_23 = (signed char)-122;
long long int arr_0 [20] ;
short arr_1 [20] ;
_Bool arr_2 [20] [20] ;
unsigned long long int arr_3 [16] ;
long long int arr_4 [16] ;
short arr_6 [16] ;
unsigned long long int arr_7 [16] ;
short arr_12 [16] ;
int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 840369820263825399LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)23532;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 10438797193183567400ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -8828303909517869523LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)7508;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 17467186353891696811ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (short)-25561;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -1499297444;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
