#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1305719479;
unsigned int var_1 = 663426515U;
long long int var_2 = -7736747975886082120LL;
unsigned long long int var_17 = 5683233613903072305ULL;
short var_18 = (short)-6600;
int zero = 0;
unsigned int var_19 = 605638348U;
unsigned char var_20 = (unsigned char)134;
unsigned char var_21 = (unsigned char)245;
unsigned short var_22 = (unsigned short)25325;
signed char var_23 = (signed char)38;
unsigned long long int var_24 = 12269861098530777639ULL;
int var_25 = -1815798858;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
