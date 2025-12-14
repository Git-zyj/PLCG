#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 158637220;
unsigned char var_4 = (unsigned char)239;
unsigned char var_5 = (unsigned char)40;
unsigned char var_6 = (unsigned char)165;
int zero = 0;
long long int var_10 = 9077481265954551992LL;
unsigned int var_11 = 2650839785U;
_Bool var_12 = (_Bool)1;
int var_13 = 600631366;
unsigned long long int var_14 = 12224598294403126144ULL;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 13432378810711170930ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
