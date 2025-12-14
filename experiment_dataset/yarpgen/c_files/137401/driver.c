#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1617059758;
long long int var_9 = -2778166502841711467LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 16260128532232052484ULL;
long long int var_20 = 7463596220451106457LL;
short var_21 = (short)-16752;
unsigned long long int var_22 = 128453489664489087ULL;
unsigned long long int var_23 = 1972167964241906358ULL;
long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 1125887791347983381LL;
}

void checksum() {
    hash(&seed, var_19);
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
