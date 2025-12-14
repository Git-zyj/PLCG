#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20170;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)62432;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 5593223173241027992ULL;
signed char var_7 = (signed char)-43;
int zero = 0;
int var_10 = -35578050;
short var_11 = (short)-7384;
int var_12 = -46862459;
long long int var_13 = 1749753381525005980LL;
long long int var_14 = 3898543859933442449LL;
unsigned int arr_4 [17] [17] [17] ;
short arr_5 [17] [17] [17] ;
unsigned long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 943369802U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-23155;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 8203835618900887071ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
