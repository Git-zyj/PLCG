#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3366624007U;
_Bool var_10 = (_Bool)1;
int var_12 = 140865285;
unsigned int var_15 = 2945156677U;
int zero = 0;
short var_19 = (short)-24326;
int var_20 = 2037315708;
void init() {
}

void checksum() {
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
