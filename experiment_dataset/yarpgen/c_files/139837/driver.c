#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8063;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)43476;
unsigned char var_10 = (unsigned char)226;
int zero = 0;
unsigned char var_13 = (unsigned char)212;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)36325;
_Bool arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
