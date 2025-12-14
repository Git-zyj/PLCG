#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5199539609292727417ULL;
short var_4 = (short)6749;
unsigned short var_5 = (unsigned short)44657;
short var_11 = (short)-9912;
short var_12 = (short)5579;
signed char var_13 = (signed char)-63;
unsigned int var_14 = 1234884584U;
unsigned long long int var_18 = 18388816055001859776ULL;
unsigned char var_19 = (unsigned char)218;
int zero = 0;
short var_20 = (short)12758;
short var_21 = (short)-15509;
unsigned short var_22 = (unsigned short)64404;
unsigned int var_23 = 2372477775U;
unsigned long long int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 16188845887990749234ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)39969;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 16813475216240600257ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
