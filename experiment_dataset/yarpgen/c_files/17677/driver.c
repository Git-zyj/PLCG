#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2575977008U;
unsigned int var_3 = 3107933415U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)109;
short var_11 = (short)32255;
int zero = 0;
int var_12 = -1869563240;
unsigned short var_13 = (unsigned short)3523;
long long int var_14 = -4288283281676695003LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)33923;
int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -1481936490 : -1907372825;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
