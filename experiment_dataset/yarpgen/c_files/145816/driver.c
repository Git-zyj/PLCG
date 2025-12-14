#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 1492436438U;
short var_6 = (short)-1792;
long long int var_7 = -1819531133765088669LL;
_Bool var_8 = (_Bool)1;
int var_9 = -1179161932;
short var_18 = (short)10292;
int zero = 0;
int var_19 = -3922897;
unsigned int var_20 = 2961282863U;
unsigned char var_21 = (unsigned char)166;
unsigned int var_22 = 510821634U;
unsigned char var_23 = (unsigned char)6;
signed char arr_0 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)18;
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
