#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)200;
signed char var_7 = (signed char)-100;
signed char var_15 = (signed char)-59;
int zero = 0;
short var_17 = (short)21978;
unsigned char var_18 = (unsigned char)56;
short var_19 = (short)28871;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)39;
unsigned char var_22 = (unsigned char)125;
signed char var_23 = (signed char)80;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)3125;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
