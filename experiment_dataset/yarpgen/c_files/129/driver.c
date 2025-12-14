#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 379956407U;
unsigned long long int var_3 = 839935814046506427ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)22221;
signed char var_8 = (signed char)-115;
long long int var_12 = 3912146844136285681LL;
long long int var_14 = 1631429658280985500LL;
unsigned short var_17 = (unsigned short)20939;
unsigned short var_19 = (unsigned short)48988;
int zero = 0;
unsigned long long int var_20 = 434106125795518442ULL;
int var_21 = 2138243869;
long long int var_22 = 6798683555778035943LL;
unsigned int var_23 = 2956842035U;
_Bool var_24 = (_Bool)1;
unsigned int arr_4 [21] ;
int arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3853549763U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -1612638274;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
