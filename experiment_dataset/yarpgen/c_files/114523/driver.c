#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21811;
unsigned int var_1 = 3676291071U;
long long int var_2 = -282510931222384157LL;
unsigned long long int var_5 = 8583271357743520735ULL;
signed char var_6 = (signed char)-45;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 8034363993362765196ULL;
short var_10 = (short)-12100;
signed char var_12 = (signed char)-23;
short var_13 = (short)10249;
long long int var_16 = -4421746690211976514LL;
int zero = 0;
long long int var_18 = 936682444845500881LL;
int var_19 = -171659834;
unsigned short var_20 = (unsigned short)59269;
long long int var_21 = -9206077081306483361LL;
signed char var_22 = (signed char)19;
short var_23 = (short)28438;
long long int var_24 = -8042905102649195981LL;
short arr_1 [18] [18] ;
signed char arr_2 [18] ;
short arr_7 [23] ;
unsigned long long int arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-9141;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (short)-9747;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 13202328881224016076ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
