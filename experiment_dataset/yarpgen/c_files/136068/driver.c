#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8510577006229354755ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 12772418812289164558ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)95;
unsigned long long int var_13 = 3168094278497400325ULL;
unsigned int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 483045788U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
