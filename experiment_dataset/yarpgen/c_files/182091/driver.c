#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6317102156556733747LL;
unsigned int var_5 = 3858909925U;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)248;
unsigned long long int var_9 = 1508403514527453521ULL;
unsigned short var_10 = (unsigned short)59318;
unsigned short var_12 = (unsigned short)15564;
unsigned char var_14 = (unsigned char)172;
short var_16 = (short)-20856;
int zero = 0;
signed char var_17 = (signed char)-20;
short var_18 = (short)28521;
signed char var_19 = (signed char)-94;
short var_20 = (short)10303;
_Bool arr_2 [18] ;
long long int arr_3 [18] [18] [18] ;
unsigned short arr_4 [18] ;
long long int arr_5 [18] [18] ;
short arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6985173121127639358LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)6009;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = -7312675712956782322LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (short)-18917;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
