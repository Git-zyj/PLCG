#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2404400207843357776LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 1287923188453578258LL;
unsigned long long int var_5 = 7264322702796703161ULL;
unsigned int var_10 = 1477436066U;
unsigned int var_16 = 1894994747U;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3938374826222155381LL;
short var_22 = (short)30629;
int var_23 = -1827902306;
long long int var_24 = 7900160963566360226LL;
_Bool var_25 = (_Bool)1;
int var_26 = -904336694;
unsigned int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2625043995U : 3808623747U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
