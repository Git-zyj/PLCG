#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4117900929U;
unsigned char var_10 = (unsigned char)198;
unsigned char var_11 = (unsigned char)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_14 = 2544132438001440215LL;
signed char var_15 = (signed char)-99;
unsigned long long int var_16 = 5914463175578715467ULL;
unsigned short var_17 = (unsigned short)55777;
unsigned short arr_0 [16] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)46015;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-26041;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
