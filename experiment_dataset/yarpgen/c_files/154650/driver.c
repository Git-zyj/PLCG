#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5620215326094878502ULL;
int var_6 = -392642243;
int var_8 = -116892721;
int var_12 = 612571492;
unsigned int var_15 = 948889456U;
int var_17 = -172611730;
int zero = 0;
unsigned long long int var_19 = 1497970361457067234ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-2;
unsigned long long int var_22 = 14058395002831147211ULL;
unsigned long long int var_23 = 2306936735772280335ULL;
_Bool arr_2 [22] ;
int arr_7 [23] ;
signed char arr_9 [23] [23] ;
int arr_5 [22] ;
unsigned int arr_6 [22] [22] ;
int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -362369311;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1375634938;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 1353305093U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1806950017 : 588599718;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
