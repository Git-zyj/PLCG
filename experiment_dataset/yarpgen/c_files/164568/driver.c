#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-87;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_20 = 7819450386392482209LL;
unsigned int var_21 = 2492269172U;
unsigned char arr_2 [18] ;
long long int arr_3 [18] ;
short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3891856649927260632LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)3798;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
