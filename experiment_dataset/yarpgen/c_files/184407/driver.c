#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
signed char var_1 = (signed char)-9;
int var_2 = -547299351;
unsigned char var_6 = (unsigned char)196;
unsigned int var_7 = 1874521802U;
unsigned short var_8 = (unsigned short)52260;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_13 = -688285082;
long long int var_14 = -8074143805462698728LL;
int var_15 = -525369720;
long long int var_16 = 5556320935643427429LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2203213608U;
signed char var_20 = (signed char)-7;
unsigned short var_21 = (unsigned short)3163;
short arr_13 [17] ;
unsigned char arr_14 [17] ;
_Bool arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)433 : (short)5992;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)78 : (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
