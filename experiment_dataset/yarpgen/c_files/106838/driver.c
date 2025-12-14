#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 795677138;
unsigned int var_3 = 32780366U;
short var_5 = (short)-17758;
short var_7 = (short)9275;
unsigned long long int var_9 = 15918265955379661572ULL;
int zero = 0;
signed char var_20 = (signed char)58;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 321323935U;
unsigned char var_23 = (unsigned char)122;
unsigned int var_24 = 553477116U;
unsigned char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)15;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
