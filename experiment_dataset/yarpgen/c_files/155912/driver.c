#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4179805293466545891ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_10 = (unsigned char)95;
int zero = 0;
int var_13 = 838737714;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 17032506229504299617ULL;
unsigned char var_16 = (unsigned char)17;
unsigned int var_17 = 1350583782U;
unsigned int var_18 = 455909344U;
signed char arr_0 [25] ;
_Bool arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
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
