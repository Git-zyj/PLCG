#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -597883254713041321LL;
unsigned int var_2 = 1423181847U;
int var_4 = 720440841;
short var_6 = (short)-719;
int var_7 = 1627071948;
unsigned short var_12 = (unsigned short)49227;
long long int var_13 = -1055568898210103110LL;
int zero = 0;
unsigned char var_14 = (unsigned char)128;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)243;
unsigned short var_17 = (unsigned short)24338;
_Bool arr_0 [20] ;
signed char arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)56;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
