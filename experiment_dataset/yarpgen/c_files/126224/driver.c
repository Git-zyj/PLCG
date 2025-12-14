#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)97;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3186918274U;
unsigned int var_7 = 574346454U;
unsigned int var_9 = 4231475578U;
unsigned int var_10 = 1760219299U;
int var_12 = 1122093949;
int zero = 0;
long long int var_13 = 3133709757600562178LL;
unsigned int var_14 = 2662931799U;
int var_15 = -692050875;
int arr_0 [16] ;
_Bool arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 176026195;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
