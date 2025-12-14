#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6270008400030100946ULL;
unsigned long long int var_2 = 8691774790200455181ULL;
signed char var_3 = (signed char)54;
long long int var_4 = 5208440882769330765LL;
unsigned int var_9 = 2614739455U;
signed char var_10 = (signed char)-93;
short var_11 = (short)-20225;
signed char var_12 = (signed char)66;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)113;
int zero = 0;
int var_17 = -467420390;
unsigned int var_18 = 1800712455U;
long long int var_19 = 8359248999381804376LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)2500;
unsigned int var_22 = 2604249456U;
unsigned int var_23 = 1059246771U;
signed char arr_1 [19] ;
signed char arr_3 [19] [19] ;
signed char arr_13 [24] ;
int arr_18 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 708965632 : 251872451;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
