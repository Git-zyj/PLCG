#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8889874172047506094LL;
_Bool var_2 = (_Bool)1;
int var_6 = 1569961939;
int var_8 = 1168385173;
long long int var_9 = -8494004770893632317LL;
unsigned long long int var_12 = 10288119350887982098ULL;
int var_14 = -1624198292;
unsigned int var_16 = 272922664U;
signed char var_17 = (signed char)-16;
long long int var_18 = -8167496522664475354LL;
int zero = 0;
unsigned long long int var_19 = 12805801405144203504ULL;
unsigned short var_20 = (unsigned short)24103;
signed char var_21 = (signed char)96;
long long int var_22 = 5421094859600426565LL;
signed char arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)37531;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 2008456817U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
