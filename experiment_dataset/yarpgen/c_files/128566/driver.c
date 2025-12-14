#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
int var_1 = -586660179;
signed char var_2 = (signed char)8;
_Bool var_3 = (_Bool)1;
int var_6 = 1370735346;
int var_8 = -1946555522;
int var_9 = 1648229080;
unsigned char var_11 = (unsigned char)1;
unsigned int var_12 = 3375938246U;
long long int var_13 = -2434237466581180344LL;
int zero = 0;
unsigned char var_14 = (unsigned char)135;
long long int var_15 = -4764252999394498499LL;
unsigned long long int var_16 = 6993735791438260300ULL;
signed char var_17 = (signed char)-125;
short var_18 = (short)31403;
_Bool arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 4185434346U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 17539593240726414980ULL : 5434926955794619615ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
