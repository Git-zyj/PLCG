#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2074091277U;
long long int var_2 = 2155641469838496782LL;
unsigned int var_17 = 1552553443U;
int zero = 0;
unsigned short var_18 = (unsigned short)24499;
unsigned long long int var_19 = 7957983736958136530ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
