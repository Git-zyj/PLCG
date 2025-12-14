#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6409;
unsigned short var_2 = (unsigned short)21483;
int var_4 = 1593033682;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)43;
signed char var_8 = (signed char)38;
int var_9 = 45430634;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)31236;
int zero = 0;
unsigned int var_13 = 1752424358U;
short var_14 = (short)15288;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-13270;
unsigned short arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)39340 : (unsigned short)48282;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
