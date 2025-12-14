#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)48;
unsigned char var_13 = (unsigned char)44;
long long int var_15 = -4429134742929040277LL;
unsigned int var_18 = 4058971243U;
int zero = 0;
unsigned char var_19 = (unsigned char)133;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5225393512940836350LL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)60;
long long int var_24 = -7752277168802728457LL;
short arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)13418;
}

void checksum() {
    hash(&seed, var_19);
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
