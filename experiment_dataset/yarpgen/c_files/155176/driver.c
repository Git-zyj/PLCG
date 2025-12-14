#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)35730;
unsigned int var_3 = 689226739U;
unsigned char var_7 = (unsigned char)209;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-53;
unsigned char var_12 = (unsigned char)137;
int zero = 0;
signed char var_13 = (signed char)117;
int var_14 = -763829875;
long long int var_15 = -6988315187923996617LL;
unsigned char var_16 = (unsigned char)89;
signed char var_17 = (signed char)-110;
long long int var_18 = -271706760546352535LL;
int arr_1 [23] ;
unsigned int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1734936243;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 2867487754U : 4131058285U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
