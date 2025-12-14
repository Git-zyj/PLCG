#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 415917838U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 7903504602026580696ULL;
unsigned short var_9 = (unsigned short)49292;
unsigned long long int var_10 = 12313528955613284343ULL;
int zero = 0;
long long int var_12 = -2917458876535219944LL;
long long int var_13 = 6198631236739028091LL;
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
