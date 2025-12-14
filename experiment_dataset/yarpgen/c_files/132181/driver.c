#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11102959468129616751ULL;
long long int var_2 = -8742631052770644418LL;
int var_5 = 1144653145;
unsigned long long int var_6 = 13059132462637352380ULL;
unsigned char var_10 = (unsigned char)176;
short var_11 = (short)4122;
int zero = 0;
short var_16 = (short)-74;
long long int var_17 = 1843696747538268500LL;
signed char var_18 = (signed char)-4;
short var_19 = (short)-9774;
unsigned char var_20 = (unsigned char)194;
_Bool arr_0 [14] ;
unsigned long long int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 8709210197406493864ULL;
}

void checksum() {
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
