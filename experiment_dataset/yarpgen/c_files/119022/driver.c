#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20364;
unsigned int var_8 = 2277661901U;
unsigned int var_12 = 2351349012U;
unsigned long long int var_13 = 648482420846629313ULL;
int zero = 0;
unsigned long long int var_15 = 6057401424324333219ULL;
unsigned int var_16 = 2917631944U;
unsigned long long int var_17 = 1333453359522264757ULL;
int var_18 = -283934662;
unsigned short arr_0 [25] ;
short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)55561;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-8825;
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
