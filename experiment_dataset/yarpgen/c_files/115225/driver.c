#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2579752178U;
unsigned int var_2 = 3268622386U;
long long int var_3 = -6777160963837458969LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2092368832U;
unsigned long long int var_6 = 13585630215805965769ULL;
unsigned int var_7 = 529850450U;
unsigned int var_8 = 3145391669U;
unsigned short var_10 = (unsigned short)62144;
int zero = 0;
unsigned long long int var_13 = 1420246818324021246ULL;
short var_14 = (short)31042;
long long int var_15 = -8023650046039822994LL;
long long int var_16 = -8963231996746858280LL;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -7786588250098625838LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
