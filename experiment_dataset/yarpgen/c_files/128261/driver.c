#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39540;
unsigned short var_2 = (unsigned short)34517;
short var_3 = (short)-4360;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)113;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11338052763887796235ULL;
short arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-21214;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
