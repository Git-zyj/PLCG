#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
long long int var_2 = 3324469450879437730LL;
unsigned int var_6 = 3345982486U;
signed char var_7 = (signed char)-92;
long long int var_8 = 1698911707419954474LL;
signed char var_9 = (signed char)113;
int zero = 0;
signed char var_12 = (signed char)-84;
long long int var_13 = -2601807944833010306LL;
void init() {
}

void checksum() {
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
