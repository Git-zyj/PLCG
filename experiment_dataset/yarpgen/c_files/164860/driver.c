#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2038297867U;
long long int var_4 = 3735243109239530064LL;
int var_7 = 1275437195;
unsigned int var_8 = 909584235U;
int zero = 0;
int var_11 = -657058213;
unsigned int var_12 = 609504724U;
unsigned int var_13 = 1263514990U;
unsigned int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3209495900U;
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
