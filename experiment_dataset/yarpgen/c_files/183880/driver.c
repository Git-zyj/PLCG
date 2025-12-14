#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 1087257236U;
short var_4 = (short)-16142;
short var_5 = (short)-14288;
long long int var_6 = 883211030091478239LL;
int var_7 = -708869187;
long long int var_9 = 3984974047530859655LL;
signed char var_10 = (signed char)18;
signed char var_11 = (signed char)75;
int zero = 0;
unsigned long long int var_13 = 14913092449685113203ULL;
signed char var_14 = (signed char)107;
unsigned char var_15 = (unsigned char)251;
long long int var_16 = -931174018825930452LL;
unsigned int var_17 = 1028523908U;
short var_18 = (short)7771;
unsigned short var_19 = (unsigned short)37097;
int var_20 = 1433571894;
unsigned long long int arr_0 [20] [20] ;
short arr_1 [20] [20] ;
signed char arr_2 [20] ;
_Bool arr_5 [20] [20] ;
unsigned char arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 12157212531047061046ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)15027;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)174 : (unsigned char)118;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
