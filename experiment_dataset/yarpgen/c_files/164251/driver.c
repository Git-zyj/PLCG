#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6592;
long long int var_8 = 4561971137700877509LL;
unsigned char var_9 = (unsigned char)73;
_Bool var_11 = (_Bool)1;
short var_14 = (short)11797;
int zero = 0;
unsigned int var_19 = 3222012011U;
unsigned long long int var_20 = 15780589439959237121ULL;
unsigned long long int var_21 = 10355598469983101133ULL;
unsigned int var_22 = 1097484490U;
short var_23 = (short)2380;
signed char arr_0 [15] ;
unsigned char arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)6;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
