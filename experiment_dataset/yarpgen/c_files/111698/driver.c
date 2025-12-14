#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2993269172U;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_10 = (short)16313;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)93;
short var_14 = (short)18745;
signed char var_15 = (signed char)17;
unsigned long long int arr_0 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1147585815402577901ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
