#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17868955363362862892ULL;
unsigned int var_5 = 2888374108U;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3257388636U;
int zero = 0;
unsigned int var_11 = 3707417084U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)27571;
unsigned short var_14 = (unsigned short)22366;
unsigned short arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)54205;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
