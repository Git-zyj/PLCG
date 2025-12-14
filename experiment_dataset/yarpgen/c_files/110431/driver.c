#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14145264065485742004ULL;
unsigned long long int var_2 = 8113996962597708677ULL;
unsigned long long int var_3 = 16539530072816248911ULL;
short var_11 = (short)23390;
signed char var_13 = (signed char)47;
signed char var_14 = (signed char)-122;
signed char var_15 = (signed char)50;
unsigned long long int var_19 = 12086109683838755561ULL;
int zero = 0;
unsigned long long int var_20 = 8103316356181722486ULL;
int var_21 = -1889720626;
signed char var_22 = (signed char)-88;
short var_23 = (short)32037;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)46;
int var_26 = 155565209;
_Bool arr_0 [24] ;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
