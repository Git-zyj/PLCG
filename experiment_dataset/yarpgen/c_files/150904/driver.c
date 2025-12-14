#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52838;
signed char var_1 = (signed char)123;
_Bool var_2 = (_Bool)1;
int var_3 = -993076539;
signed char var_4 = (signed char)-120;
int var_6 = 1933285584;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)190;
unsigned int var_9 = 1660781958U;
int var_10 = -1359764201;
int var_11 = 763549114;
int var_12 = 1941709063;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
unsigned long long int var_15 = 15283530766713876300ULL;
unsigned char var_16 = (unsigned char)76;
int var_17 = -1810322459;
short var_18 = (short)27879;
unsigned char var_19 = (unsigned char)43;
unsigned long long int arr_4 [19] ;
unsigned int arr_15 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 4682940476984878670ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 3345137757U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
