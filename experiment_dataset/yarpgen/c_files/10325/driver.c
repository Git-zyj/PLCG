#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned short var_1 = (unsigned short)39568;
unsigned short var_3 = (unsigned short)24600;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)101;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)139;
unsigned char var_11 = (unsigned char)243;
signed char var_15 = (signed char)90;
int zero = 0;
short var_19 = (short)31321;
unsigned short var_20 = (unsigned short)51428;
signed char var_21 = (signed char)104;
signed char var_22 = (signed char)99;
unsigned char var_23 = (unsigned char)15;
unsigned short arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)48113;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
