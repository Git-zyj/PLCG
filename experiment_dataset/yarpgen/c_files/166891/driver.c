#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 134722223720276776ULL;
int var_2 = -129103442;
unsigned int var_3 = 2077228472U;
signed char var_6 = (signed char)-8;
unsigned int var_8 = 1175598177U;
int zero = 0;
unsigned int var_12 = 1192264162U;
int var_13 = 746795639;
int var_14 = -993358267;
_Bool var_15 = (_Bool)0;
void init() {
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
