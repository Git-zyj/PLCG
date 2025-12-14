#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
unsigned int var_2 = 1919747186U;
unsigned char var_5 = (unsigned char)219;
unsigned char var_6 = (unsigned char)187;
long long int var_7 = -7947745373141050532LL;
int var_10 = -171359852;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
unsigned int var_13 = 4255769907U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2369572641U;
short arr_0 [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)10693;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)23068;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
