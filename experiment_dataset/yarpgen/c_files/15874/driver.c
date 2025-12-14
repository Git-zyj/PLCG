#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)252;
unsigned char var_8 = (unsigned char)202;
signed char var_10 = (signed char)-112;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)53126;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
unsigned short var_18 = (unsigned short)43257;
short var_19 = (short)-24474;
signed char var_20 = (signed char)112;
short arr_0 [15] ;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)31913;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-22724;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
