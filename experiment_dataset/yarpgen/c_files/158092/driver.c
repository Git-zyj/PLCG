#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)52006;
unsigned short var_10 = (unsigned short)25193;
unsigned int var_12 = 1322076638U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-13;
unsigned long long int var_16 = 5128297408504726329ULL;
unsigned long long int var_18 = 10625066701084982338ULL;
int zero = 0;
short var_19 = (short)-10286;
unsigned long long int var_20 = 4263735349804710591ULL;
int var_21 = -1758073575;
short var_22 = (short)19385;
signed char arr_2 [15] [15] ;
signed char arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-126 : (signed char)22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)20 : (signed char)58;
}

void checksum() {
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
