#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2391754775U;
signed char var_5 = (signed char)108;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 12835467074833379917ULL;
unsigned int var_12 = 2997898861U;
int zero = 0;
signed char var_13 = (signed char)111;
unsigned int var_14 = 1370083438U;
unsigned long long int var_15 = 17881491761047549803ULL;
void init() {
}

void checksum() {
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
