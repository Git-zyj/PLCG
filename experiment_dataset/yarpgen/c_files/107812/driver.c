#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-58;
long long int var_3 = -7334099182348594238LL;
short var_4 = (short)31785;
short var_5 = (short)28320;
long long int var_6 = 3145037714345160708LL;
int var_8 = -1701309770;
signed char var_9 = (signed char)69;
unsigned char var_11 = (unsigned char)240;
unsigned long long int var_13 = 18114454304952156345ULL;
int zero = 0;
signed char var_18 = (signed char)7;
signed char var_19 = (signed char)15;
short var_20 = (short)-30331;
signed char var_21 = (signed char)51;
signed char var_22 = (signed char)-20;
unsigned short var_23 = (unsigned short)55063;
unsigned int var_24 = 799991944U;
short arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
long long int arr_2 [12] ;
long long int arr_5 [18] ;
int arr_6 [18] ;
unsigned long long int arr_7 [18] [18] ;
long long int arr_3 [12] ;
short arr_4 [12] ;
long long int arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)10508;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3006091383962231875ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -2269522826902518929LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 2724005564687166616LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 590494566;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 5505483892485986425ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -2319290891524331314LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)575;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 5892500916439151887LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
