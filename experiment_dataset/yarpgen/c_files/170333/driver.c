#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 7674176570462659763ULL;
unsigned long long int var_12 = 16675187033390663776ULL;
unsigned char var_13 = (unsigned char)0;
unsigned long long int var_14 = 8333139658051370536ULL;
long long int var_17 = 2074838026869113212LL;
int zero = 0;
unsigned long long int var_18 = 10740879026246702004ULL;
unsigned long long int var_19 = 15789267739180975916ULL;
unsigned long long int var_20 = 11378095316423123590ULL;
unsigned int var_21 = 2141608770U;
unsigned long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2782228907948147277ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 8363052160772176944ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
