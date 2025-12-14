#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12017;
unsigned long long int var_5 = 2901699645750617348ULL;
unsigned long long int var_8 = 13514971120111522796ULL;
short var_17 = (short)8225;
int zero = 0;
unsigned int var_20 = 2952852106U;
unsigned int var_21 = 776344341U;
short var_22 = (short)28335;
signed char var_23 = (signed char)48;
short var_24 = (short)20508;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 12415011550498270972ULL;
_Bool arr_0 [24] ;
unsigned long long int arr_1 [24] ;
long long int arr_2 [24] ;
unsigned long long int arr_3 [24] ;
_Bool arr_6 [18] ;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 4693659062812309408ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4530877508732611613LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 3518530176941850338ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)30366;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
