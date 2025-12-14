#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1183461374;
long long int var_3 = -4582359234596182680LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_17 = -252130582733846612LL;
unsigned int var_18 = 76333389U;
unsigned int var_19 = 3971904153U;
unsigned char var_20 = (unsigned char)13;
unsigned int var_21 = 3343846511U;
unsigned long long int var_22 = 9350363109680557745ULL;
unsigned char var_23 = (unsigned char)57;
long long int arr_0 [19] ;
unsigned char arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2690673927776248866LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)224;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
