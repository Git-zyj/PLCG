#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
int var_12 = 88524676;
signed char var_14 = (signed char)-68;
int zero = 0;
short var_20 = (short)29737;
signed char var_21 = (signed char)-75;
unsigned short var_22 = (unsigned short)48229;
_Bool var_23 = (_Bool)0;
long long int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
int arr_3 [15] ;
unsigned int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4141606033878110839LL : -7293838393942412034LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 17162160895339060761ULL : 16627532236531890629ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1454318848 : -331456227;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2714141450U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
