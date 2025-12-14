#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1097012054;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1511070638U;
unsigned long long int var_7 = 14654022020041246973ULL;
unsigned int var_9 = 3931265185U;
int zero = 0;
unsigned short var_13 = (unsigned short)25439;
unsigned long long int var_14 = 15926316179388596662ULL;
_Bool var_15 = (_Bool)0;
_Bool arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
