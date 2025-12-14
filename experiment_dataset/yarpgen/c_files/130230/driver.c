#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_6 = -4360877263296735214LL;
unsigned long long int var_11 = 14052891614043788924ULL;
int var_12 = -1821369419;
signed char var_14 = (signed char)-11;
int var_17 = 290592673;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -626035369;
unsigned long long int var_20 = 6573730255915304445ULL;
int var_21 = 536325536;
unsigned long long int var_22 = 12838565379223248734ULL;
unsigned long long int var_23 = 3314644318521285002ULL;
unsigned short arr_0 [15] ;
unsigned long long int arr_2 [15] ;
unsigned short arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)55435;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 14127521477324886648ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)956;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
