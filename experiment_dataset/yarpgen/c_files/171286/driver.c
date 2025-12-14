#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)16369;
signed char var_5 = (signed char)10;
short var_8 = (short)19299;
short var_10 = (short)5780;
short var_12 = (short)1690;
int zero = 0;
long long int var_13 = 1144094503156714103LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2828926119U;
unsigned char var_16 = (unsigned char)67;
_Bool var_17 = (_Bool)0;
short var_18 = (short)14564;
short arr_0 [18] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-32197;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
