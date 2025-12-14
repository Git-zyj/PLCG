#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 481166152U;
int var_3 = -1202126938;
unsigned int var_4 = 3628794052U;
_Bool var_10 = (_Bool)0;
int var_12 = -917352491;
int zero = 0;
unsigned int var_13 = 2350196134U;
unsigned int var_14 = 1046269217U;
int var_15 = 2014834737;
unsigned long long int var_16 = 7986941538624781382ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
