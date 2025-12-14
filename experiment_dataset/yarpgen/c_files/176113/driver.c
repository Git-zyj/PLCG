#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2001056994;
unsigned short var_2 = (unsigned short)30414;
unsigned int var_3 = 1070032585U;
unsigned short var_4 = (unsigned short)43855;
unsigned int var_7 = 1908460459U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-25351;
int zero = 0;
unsigned char var_11 = (unsigned char)91;
int var_12 = -1426532441;
unsigned short var_13 = (unsigned short)31634;
short var_14 = (short)-2259;
unsigned short arr_1 [24] ;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)24068;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)43164;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
