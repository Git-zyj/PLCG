#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4148585265907660468LL;
short var_2 = (short)-4949;
unsigned int var_8 = 266504277U;
int zero = 0;
unsigned int var_10 = 4247341221U;
short var_11 = (short)13099;
unsigned long long int var_12 = 3869627588956079142ULL;
unsigned int var_13 = 2475023520U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
