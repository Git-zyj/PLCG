#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)152;
unsigned short var_4 = (unsigned short)15599;
short var_15 = (short)-29351;
signed char var_16 = (signed char)-84;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int var_19 = 1686573313;
int var_20 = -1478426918;
unsigned char var_21 = (unsigned char)37;
unsigned short arr_1 [12] ;
short arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)17197;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-28766;
}

void checksum() {
    hash(&seed, var_17);
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
