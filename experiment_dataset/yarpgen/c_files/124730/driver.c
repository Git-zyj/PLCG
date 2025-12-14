#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)244;
int var_3 = 1740295568;
unsigned char var_6 = (unsigned char)182;
signed char var_7 = (signed char)-22;
_Bool var_8 = (_Bool)0;
long long int var_9 = -3671888728758257619LL;
signed char var_10 = (signed char)109;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -6881045302598491017LL;
int var_13 = -1388636669;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)128;
short var_16 = (short)23491;
signed char var_17 = (signed char)-120;
unsigned int var_18 = 3540768117U;
unsigned int var_19 = 10660556U;
unsigned long long int var_20 = 18249995105820279083ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 3343883022570662854ULL;
_Bool arr_0 [10] [10] ;
unsigned int arr_1 [10] ;
_Bool arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1896463623U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
