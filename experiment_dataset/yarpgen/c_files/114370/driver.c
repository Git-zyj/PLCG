#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19090;
unsigned short var_5 = (unsigned short)52928;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 12977730206084553612ULL;
unsigned short var_13 = (unsigned short)9243;
long long int var_14 = -3918769579471515957LL;
int zero = 0;
long long int var_15 = 5621987543344186297LL;
unsigned long long int var_16 = 16410588140075274734ULL;
short var_17 = (short)-16139;
unsigned long long int var_18 = 9068939369776761416ULL;
signed char arr_0 [15] ;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)26555;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
