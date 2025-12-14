#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4275992709U;
unsigned int var_9 = 2462645083U;
unsigned int var_17 = 3386480954U;
int zero = 0;
unsigned short var_18 = (unsigned short)61481;
short var_19 = (short)30847;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2646574156U;
unsigned int var_22 = 646700770U;
unsigned char arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)148;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
