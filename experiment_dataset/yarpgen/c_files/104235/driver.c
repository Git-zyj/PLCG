#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1478250973U;
unsigned short var_6 = (unsigned short)9321;
short var_14 = (short)25459;
int zero = 0;
unsigned long long int var_18 = 10318124959705776729ULL;
short var_19 = (short)-19803;
unsigned long long int var_20 = 13917506994774341134ULL;
unsigned long long int var_21 = 5185151787037955322ULL;
int var_22 = -99406031;
unsigned char arr_0 [20] ;
_Bool arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
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
