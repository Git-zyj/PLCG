#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)51;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)64;
unsigned int var_17 = 2928575916U;
int zero = 0;
int var_18 = -310738224;
unsigned char var_19 = (unsigned char)72;
short var_20 = (short)21639;
int var_21 = -1519715749;
unsigned short arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)8598;
}

void checksum() {
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
