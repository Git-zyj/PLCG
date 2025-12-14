#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1780126203;
signed char var_5 = (signed char)-92;
unsigned long long int var_7 = 1847967491384960920ULL;
unsigned int var_9 = 1856526136U;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_16 = (short)3426;
_Bool var_17 = (_Bool)1;
unsigned int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1902851000U : 3855318023U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
