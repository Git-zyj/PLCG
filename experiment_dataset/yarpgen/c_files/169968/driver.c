#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)57;
long long int var_10 = 1987692781739334229LL;
unsigned int var_12 = 2228352223U;
int var_13 = -107275264;
int zero = 0;
unsigned short var_14 = (unsigned short)21467;
unsigned int var_15 = 188613477U;
signed char var_16 = (signed char)-6;
short var_17 = (short)31608;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)192;
long long int var_21 = 8646038660751387018LL;
unsigned long long int var_22 = 7529655750932067304ULL;
unsigned int arr_3 [10] [10] ;
unsigned int arr_6 [10] ;
signed char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1825156853U : 3163510040U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1476160227U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-83 : (signed char)84;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
