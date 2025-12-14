#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38350;
unsigned char var_5 = (unsigned char)143;
unsigned long long int var_10 = 15663469671539618882ULL;
unsigned long long int var_11 = 3695383340748200603ULL;
short var_14 = (short)-32285;
unsigned long long int var_17 = 6278835128645794663ULL;
int zero = 0;
unsigned int var_19 = 695922255U;
short var_20 = (short)6478;
unsigned long long int var_21 = 1539230283087960311ULL;
_Bool arr_0 [13] ;
short arr_1 [13] ;
short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-18338;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)18774;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
