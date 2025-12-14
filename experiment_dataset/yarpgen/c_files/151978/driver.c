#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3687993583732776287LL;
long long int var_14 = -8004467022553949982LL;
short var_15 = (short)-4845;
int var_16 = -639350184;
unsigned int var_19 = 2038868986U;
int zero = 0;
short var_20 = (short)-30467;
unsigned short var_21 = (unsigned short)4926;
unsigned int var_22 = 3639473827U;
int var_23 = 2041237840;
_Bool var_24 = (_Bool)1;
unsigned short arr_1 [19] ;
unsigned char arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)37185;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)152;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
