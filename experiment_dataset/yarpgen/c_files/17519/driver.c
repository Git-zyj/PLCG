#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)85;
short var_10 = (short)25126;
long long int var_11 = 2256862203157089645LL;
unsigned long long int var_16 = 8388339313338706712ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 6258917045642625336LL;
unsigned long long int var_20 = 4929585773740860004ULL;
signed char var_21 = (signed char)-69;
unsigned short var_22 = (unsigned short)6305;
unsigned int arr_1 [12] ;
short arr_4 [19] ;
int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2056306366U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)-18558;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 55289812 : -1974531274;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
