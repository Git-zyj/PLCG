#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5299209869838915026ULL;
int var_4 = 269672948;
unsigned int var_9 = 1175334475U;
unsigned int var_12 = 3278940258U;
int zero = 0;
long long int var_14 = 5886759126048767427LL;
unsigned int var_15 = 2194907821U;
unsigned long long int var_16 = 7451451760932787608ULL;
signed char var_17 = (signed char)50;
_Bool var_18 = (_Bool)0;
unsigned int arr_0 [23] ;
unsigned int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2517934503U : 3952408596U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2566329380U : 929480156U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
