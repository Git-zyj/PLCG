#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5031402044337961824LL;
_Bool var_1 = (_Bool)1;
long long int var_3 = -2161798038590269967LL;
unsigned long long int var_5 = 16233142268768850159ULL;
int var_6 = -1755043119;
unsigned int var_8 = 175621629U;
int zero = 0;
short var_10 = (short)15043;
short var_11 = (short)31076;
unsigned long long int var_12 = 16137038212152465577ULL;
unsigned char var_13 = (unsigned char)223;
long long int arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
short arr_3 [23] ;
unsigned short arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -6729775003871389436LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 7814863827021835153ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)21211;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)56296;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
