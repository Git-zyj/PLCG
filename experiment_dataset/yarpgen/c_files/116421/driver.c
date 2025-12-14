#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 372670710U;
int var_5 = -876787172;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 13513170736171758824ULL;
int zero = 0;
short var_20 = (short)16313;
int var_21 = -2006636567;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
int arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -1993499717;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 524112981U;
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
