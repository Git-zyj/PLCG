#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 892495598U;
unsigned int var_3 = 270878096U;
unsigned int var_5 = 3315602249U;
unsigned int var_8 = 1221620373U;
unsigned int var_15 = 4136507474U;
unsigned int var_18 = 3818279491U;
unsigned int var_19 = 1104019044U;
int zero = 0;
unsigned int var_20 = 958954107U;
unsigned int var_21 = 3202482184U;
unsigned int var_22 = 741472743U;
unsigned int var_23 = 859340380U;
unsigned int var_24 = 3589800171U;
unsigned int var_25 = 1319889538U;
unsigned int arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 432747029U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
