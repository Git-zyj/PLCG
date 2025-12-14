#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5041588701442457839ULL;
unsigned long long int var_2 = 4595871254200082720ULL;
signed char var_6 = (signed char)29;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 6713648870782275714ULL;
signed char var_13 = (signed char)17;
signed char var_14 = (signed char)-59;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
