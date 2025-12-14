#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45909;
unsigned short var_5 = (unsigned short)36383;
unsigned char var_6 = (unsigned char)224;
unsigned char var_9 = (unsigned char)192;
long long int var_10 = -8724935582493352558LL;
int zero = 0;
signed char var_15 = (signed char)55;
unsigned long long int var_16 = 16286789456820554539ULL;
_Bool var_17 = (_Bool)1;
unsigned short arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)4769;
}

void checksum() {
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
