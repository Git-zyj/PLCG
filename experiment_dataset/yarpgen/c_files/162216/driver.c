#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59866;
unsigned long long int var_3 = 7033978094185484216ULL;
unsigned long long int var_6 = 16910680357512948799ULL;
short var_7 = (short)14926;
unsigned int var_9 = 3073500924U;
signed char var_10 = (signed char)-13;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 2458746939707094112LL;
signed char var_16 = (signed char)1;
long long int var_17 = 6445080243901086408LL;
unsigned short var_18 = (unsigned short)16766;
_Bool var_19 = (_Bool)0;
int var_20 = -1049312811;
short arr_0 [15] ;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-19732;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)26738;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
