#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6504081300734850867LL;
long long int var_1 = 3792356064849891230LL;
int var_2 = 1276324209;
unsigned int var_5 = 1557727740U;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 1936087252U;
long long int var_11 = -2453696330083993532LL;
signed char var_12 = (signed char)-19;
int zero = 0;
int var_15 = -511911860;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)116;
signed char arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
