#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2885421249U;
int zero = 0;
unsigned int var_12 = 1983771786U;
unsigned long long int var_13 = 8960065911029711871ULL;
unsigned char var_14 = (unsigned char)147;
short var_15 = (short)18371;
signed char var_16 = (signed char)31;
_Bool var_17 = (_Bool)0;
unsigned long long int arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned long long int arr_5 [21] ;
long long int arr_6 [21] ;
_Bool arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 15734388370428416209ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 14635833446153017973ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -240780089128575167LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
