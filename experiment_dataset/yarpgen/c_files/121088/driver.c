#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-64;
short var_7 = (short)28041;
short var_9 = (short)-5108;
long long int var_12 = 8220348299697744214LL;
short var_18 = (short)14306;
int zero = 0;
unsigned char var_20 = (unsigned char)52;
signed char var_21 = (signed char)-52;
unsigned long long int var_22 = 4616637495711326474ULL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 9775594892793850979ULL;
short arr_1 [16] ;
unsigned short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)2721;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)55739;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
