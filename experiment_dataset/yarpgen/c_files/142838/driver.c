#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14530262092701345364ULL;
unsigned short var_1 = (unsigned short)19408;
short var_3 = (short)-19261;
int var_6 = 738762856;
unsigned short var_8 = (unsigned short)26566;
long long int var_12 = 4689836023213357050LL;
long long int var_13 = 2531840247104599848LL;
short var_14 = (short)-32026;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3381765900U;
int zero = 0;
int var_18 = 1916355629;
unsigned short var_19 = (unsigned short)43135;
signed char var_20 = (signed char)-122;
long long int var_21 = -8464217147855822108LL;
long long int var_22 = 7992742800275684680LL;
unsigned short var_23 = (unsigned short)1621;
_Bool arr_1 [24] ;
unsigned short arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)43453;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
