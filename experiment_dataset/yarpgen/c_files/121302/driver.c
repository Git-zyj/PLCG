#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18435547767925604532ULL;
short var_5 = (short)-24640;
signed char var_7 = (signed char)26;
int var_11 = -624700825;
unsigned int var_12 = 1551132700U;
signed char var_13 = (signed char)42;
int var_14 = -1081452800;
int var_17 = 577309387;
int zero = 0;
signed char var_19 = (signed char)-124;
unsigned int var_20 = 963981760U;
int var_21 = 1066306428;
short var_22 = (short)-10794;
_Bool arr_5 [19] ;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 11823154522810448968ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
