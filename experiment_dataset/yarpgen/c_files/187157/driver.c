#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-117;
int zero = 0;
int var_20 = -1598192213;
long long int var_21 = 2586967011474978660LL;
_Bool arr_0 [20] ;
short arr_1 [20] ;
unsigned long long int arr_2 [20] ;
long long int arr_3 [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)18183;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 9049106801728217698ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 4748779821994146595LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 120427245;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
