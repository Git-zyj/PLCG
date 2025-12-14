#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -33399128613131365LL;
signed char var_3 = (signed char)-109;
unsigned char var_5 = (unsigned char)248;
unsigned long long int var_7 = 14887921714200323783ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)99;
int var_14 = 339071604;
int zero = 0;
signed char var_16 = (signed char)-21;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)222;
short var_19 = (short)-1135;
unsigned char arr_2 [16] ;
_Bool arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
