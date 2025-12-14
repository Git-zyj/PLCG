#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)13269;
unsigned short var_7 = (unsigned short)13208;
unsigned short var_10 = (unsigned short)15147;
unsigned short var_16 = (unsigned short)50061;
unsigned short var_17 = (unsigned short)58979;
int zero = 0;
unsigned short var_20 = (unsigned short)16069;
unsigned short var_21 = (unsigned short)43195;
unsigned short var_22 = (unsigned short)32430;
unsigned short var_23 = (unsigned short)28493;
unsigned short var_24 = (unsigned short)43351;
unsigned short var_25 = (unsigned short)8111;
unsigned short var_26 = (unsigned short)59543;
unsigned short arr_1 [25] [25] ;
unsigned short arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)7904;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)23037;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
