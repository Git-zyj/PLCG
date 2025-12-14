#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20431;
long long int var_5 = 4253780758936981318LL;
unsigned short var_8 = (unsigned short)16836;
unsigned short var_13 = (unsigned short)48374;
int zero = 0;
short var_15 = (short)31472;
signed char var_16 = (signed char)72;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-17078;
unsigned long long int var_19 = 13297954416632857755ULL;
long long int arr_1 [25] ;
unsigned short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6628149921048442732LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)37923;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
