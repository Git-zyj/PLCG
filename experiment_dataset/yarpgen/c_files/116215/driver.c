#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -511362488;
signed char var_3 = (signed char)-80;
unsigned long long int var_4 = 3446470324671095206ULL;
unsigned short var_6 = (unsigned short)39763;
long long int var_7 = -3623875162494195383LL;
unsigned short var_9 = (unsigned short)11954;
signed char var_14 = (signed char)46;
long long int var_15 = -6055428197059963608LL;
int zero = 0;
int var_17 = -2124363593;
signed char var_18 = (signed char)8;
short var_19 = (short)291;
long long int var_20 = -6516838880824584478LL;
short var_21 = (short)10038;
unsigned long long int var_22 = 926432862808688068ULL;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-12220;
unsigned short var_25 = (unsigned short)29527;
signed char var_26 = (signed char)113;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 10281197275322507983ULL;
unsigned short var_29 = (unsigned short)57456;
_Bool var_30 = (_Bool)1;
_Bool arr_0 [18] ;
short arr_1 [18] ;
_Bool arr_2 [19] ;
int arr_3 [19] [19] ;
_Bool arr_4 [15] [15] ;
short arr_9 [23] ;
unsigned short arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)3527;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -1183731545;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (short)-4434;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)57232;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
