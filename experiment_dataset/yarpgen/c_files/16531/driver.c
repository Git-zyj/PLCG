#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4823;
short var_1 = (short)-11122;
short var_4 = (short)14591;
unsigned short var_5 = (unsigned short)37213;
short var_6 = (short)-21871;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 12847323731247097175ULL;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)95;
int zero = 0;
short var_15 = (short)24265;
short var_16 = (short)8194;
unsigned short var_17 = (unsigned short)11365;
unsigned short var_18 = (unsigned short)28764;
unsigned int var_19 = 112361031U;
signed char var_20 = (signed char)115;
int var_21 = -458517341;
unsigned long long int arr_2 [25] ;
_Bool arr_4 [25] ;
unsigned long long int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 12390836003764565213ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 16128408383105132361ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
