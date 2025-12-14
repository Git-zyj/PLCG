#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1736782865299907671LL;
long long int var_2 = -6498171360171279538LL;
long long int var_3 = 7266641240141912384LL;
unsigned short var_4 = (unsigned short)14982;
int var_6 = -883642007;
unsigned short var_7 = (unsigned short)4298;
long long int var_8 = -3807318010658204312LL;
long long int var_9 = -3096554675964406432LL;
unsigned short var_11 = (unsigned short)4012;
long long int var_13 = -5769155252192189356LL;
unsigned short var_14 = (unsigned short)55326;
int zero = 0;
unsigned int var_16 = 1770105809U;
unsigned int var_17 = 1335787453U;
unsigned char var_18 = (unsigned char)63;
signed char var_19 = (signed char)-105;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3003020215U;
unsigned short var_22 = (unsigned short)25261;
int var_23 = -1377919896;
_Bool var_24 = (_Bool)1;
signed char arr_0 [20] ;
unsigned int arr_1 [20] [20] ;
signed char arr_7 [15] ;
unsigned int arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1151224881U : 3941428039U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 1166997492U : 2430933921U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
