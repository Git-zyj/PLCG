#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3759695184458707853ULL;
unsigned int var_8 = 2379773744U;
unsigned int var_16 = 3877656724U;
unsigned char var_17 = (unsigned char)238;
int zero = 0;
int var_20 = 1382305053;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 15239778755269178872ULL;
void init() {
}

void checksum() {
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
