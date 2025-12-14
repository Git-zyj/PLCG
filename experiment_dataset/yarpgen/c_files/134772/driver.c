#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1922;
short var_5 = (short)-22052;
unsigned short var_6 = (unsigned short)61128;
_Bool var_7 = (_Bool)0;
short var_11 = (short)-12362;
int var_12 = -844850254;
unsigned short var_15 = (unsigned short)2481;
int var_16 = 730702334;
short var_19 = (short)-15540;
int zero = 0;
signed char var_20 = (signed char)-20;
unsigned short var_21 = (unsigned short)55619;
unsigned long long int var_22 = 16193084771205638461ULL;
signed char var_23 = (signed char)26;
long long int var_24 = 2337135878319230046LL;
unsigned short arr_2 [12] ;
_Bool arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)15911;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
