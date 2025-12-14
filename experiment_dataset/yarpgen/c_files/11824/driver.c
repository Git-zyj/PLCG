#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
long long int var_3 = -47501257395634590LL;
_Bool var_4 = (_Bool)0;
unsigned int var_10 = 810500186U;
unsigned short var_11 = (unsigned short)16444;
int zero = 0;
signed char var_13 = (signed char)36;
int var_14 = -1749566132;
unsigned long long int var_15 = 3181322081605751937ULL;
unsigned short arr_5 [13] ;
unsigned long long int arr_6 [13] ;
unsigned int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)7304;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 7276061431400875795ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 2256087029U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
