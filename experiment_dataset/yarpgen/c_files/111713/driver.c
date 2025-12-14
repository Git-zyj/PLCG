#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5162708307603292169LL;
unsigned char var_2 = (unsigned char)92;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_7 = 1623173932;
int var_8 = 1467008783;
unsigned short var_11 = (unsigned short)14667;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-4909;
unsigned char var_15 = (unsigned char)206;
unsigned short var_16 = (unsigned short)21830;
unsigned long long int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 16117418874587051644ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7619682381119081971ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)209;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
