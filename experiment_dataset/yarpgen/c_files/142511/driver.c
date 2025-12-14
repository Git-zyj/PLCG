#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6800;
short var_3 = (short)-13927;
_Bool var_5 = (_Bool)1;
signed char var_10 = (signed char)106;
signed char var_11 = (signed char)49;
signed char var_12 = (signed char)-45;
int zero = 0;
signed char var_13 = (signed char)25;
int var_14 = -1937792552;
unsigned char var_15 = (unsigned char)7;
unsigned char var_16 = (unsigned char)242;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1808532933U;
unsigned long long int var_19 = 13054421953089468649ULL;
int var_20 = -1406582511;
short var_21 = (short)-16520;
signed char arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (signed char)126;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
