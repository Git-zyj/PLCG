#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned char var_2 = (unsigned char)130;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 18440123201963595133ULL;
int zero = 0;
unsigned long long int var_20 = 15387446051033646261ULL;
long long int var_21 = 8597412469419414313LL;
signed char var_22 = (signed char)9;
long long int var_23 = 1908104005422637240LL;
int var_24 = 1325876824;
unsigned long long int arr_1 [16] ;
short arr_2 [16] ;
unsigned int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 8751367417361507622ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)1825;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 430588291U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
