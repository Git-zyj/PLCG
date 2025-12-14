#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2355887161U;
unsigned long long int var_8 = 7549483654304211471ULL;
unsigned long long int var_12 = 230044929844300555ULL;
unsigned short var_14 = (unsigned short)11986;
long long int var_15 = 7110299147452916562LL;
int zero = 0;
unsigned short var_20 = (unsigned short)29860;
short var_21 = (short)10135;
short var_22 = (short)-26017;
int var_23 = 1133164471;
unsigned int var_24 = 3016280706U;
_Bool var_25 = (_Bool)0;
unsigned short arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)18463;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
