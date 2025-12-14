#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)26390;
unsigned short var_15 = (unsigned short)1422;
unsigned short var_16 = (unsigned short)58786;
int zero = 0;
long long int var_19 = 866560073995710692LL;
signed char var_20 = (signed char)27;
int var_21 = 590829641;
unsigned int var_22 = 2030040372U;
int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -2138311040;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
