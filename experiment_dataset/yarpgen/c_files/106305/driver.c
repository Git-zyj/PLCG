#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)160;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)11;
int var_16 = 785047871;
int zero = 0;
int var_18 = -1756749961;
unsigned int var_19 = 3263667748U;
unsigned int var_20 = 3435292899U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
