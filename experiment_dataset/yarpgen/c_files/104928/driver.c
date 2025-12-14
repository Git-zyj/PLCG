#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10440073968469049574ULL;
unsigned int var_4 = 1154315370U;
int var_8 = -1679098079;
signed char var_10 = (signed char)-56;
short var_12 = (short)32508;
long long int var_17 = -9158965268180525843LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)57082;
signed char var_21 = (signed char)-26;
long long int var_22 = -3246761095898434455LL;
signed char var_23 = (signed char)-113;
int var_24 = 456628569;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 4461561179503676631ULL;
int var_27 = -618155535;
long long int arr_0 [18] ;
short arr_4 [20] ;
long long int arr_7 [15] ;
signed char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 787179709864220033LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)12823;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = -8772643882306634250LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)102 : (signed char)65;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
