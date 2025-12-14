#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 13146634379333423202ULL;
unsigned char var_6 = (unsigned char)80;
int var_10 = -2128077736;
unsigned char var_12 = (unsigned char)116;
unsigned int var_13 = 1282021253U;
int var_17 = 560313376;
int zero = 0;
short var_19 = (short)18342;
signed char var_20 = (signed char)51;
unsigned int var_21 = 4103834412U;
signed char var_22 = (signed char)25;
int arr_0 [10] ;
int arr_1 [10] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 677810642;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1666653875;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-20478;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
