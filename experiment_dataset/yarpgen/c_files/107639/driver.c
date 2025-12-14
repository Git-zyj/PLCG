#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)192;
unsigned short var_3 = (unsigned short)3711;
long long int var_5 = 849865238740573643LL;
int var_8 = 1971660307;
unsigned short var_11 = (unsigned short)54915;
int zero = 0;
long long int var_19 = -7622521884320066388LL;
unsigned short var_20 = (unsigned short)31456;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3483304357U;
unsigned long long int var_23 = 14589162815608030863ULL;
unsigned long long int var_24 = 18119493680085955588ULL;
int var_25 = -116247668;
long long int var_26 = 8169168766653094501LL;
int var_27 = -1569140116;
int var_28 = 2024856331;
unsigned int var_29 = 441870356U;
unsigned long long int arr_0 [25] ;
long long int arr_1 [25] [25] ;
long long int arr_2 [16] ;
int arr_5 [13] ;
unsigned short arr_7 [13] ;
signed char arr_8 [13] [13] ;
long long int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 8767294157594977044ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 7712359941353752697LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -5789773145159718690LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 1638737335;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)30742;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = -8380323805450362637LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
