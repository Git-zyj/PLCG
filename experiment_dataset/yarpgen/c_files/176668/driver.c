#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
unsigned long long int var_1 = 6769324600755068656ULL;
long long int var_3 = 6516265086350921118LL;
int var_4 = 1118328730;
long long int var_9 = -3204210106187573872LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4489388758030855169LL;
long long int var_12 = 3375101757662103593LL;
long long int var_15 = -2438982276232702332LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -484609044;
unsigned int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 761618620U : 1558789550U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
