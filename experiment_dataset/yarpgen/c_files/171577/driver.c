#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)61;
_Bool var_6 = (_Bool)0;
short var_8 = (short)12604;
unsigned long long int var_9 = 4948942815645823554ULL;
unsigned int var_11 = 1029351000U;
short var_12 = (short)8273;
int zero = 0;
unsigned char var_13 = (unsigned char)178;
short var_14 = (short)-25316;
_Bool var_15 = (_Bool)1;
int var_16 = 1032664848;
int var_17 = 91410260;
unsigned int arr_2 [22] ;
unsigned int arr_4 [22] ;
long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3030610170U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3379685488U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1481539682903376983LL : -1673381003604388905LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
