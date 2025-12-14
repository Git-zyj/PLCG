#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13232;
long long int var_7 = -5627450758183992742LL;
unsigned long long int var_8 = 10141460167183423260ULL;
unsigned short var_9 = (unsigned short)15150;
unsigned int var_12 = 2774256647U;
int zero = 0;
long long int var_15 = 8508972538841372862LL;
unsigned int var_16 = 2954262111U;
long long int var_17 = 5287731550620195882LL;
unsigned short arr_1 [10] ;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)61026;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3078023332U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
