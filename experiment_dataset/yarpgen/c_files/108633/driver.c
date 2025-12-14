#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15429229551559401353ULL;
unsigned int var_1 = 2417753553U;
unsigned char var_2 = (unsigned char)21;
short var_3 = (short)-26901;
short var_6 = (short)13040;
signed char var_8 = (signed char)5;
unsigned long long int var_10 = 6823339399316706420ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10075823398020306967ULL;
short var_15 = (short)32121;
int var_16 = -1661116724;
unsigned char var_17 = (unsigned char)35;
unsigned long long int arr_1 [21] ;
long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 998953190477604139ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7869591365891701509LL : -3290171538204556818LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
