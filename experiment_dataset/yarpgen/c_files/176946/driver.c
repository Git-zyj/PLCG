#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1611910713063279983LL;
long long int var_9 = -9016818784445649320LL;
signed char var_11 = (signed char)-87;
int zero = 0;
long long int var_14 = 307575090205535029LL;
unsigned long long int var_15 = 9731552283501378917ULL;
unsigned short var_16 = (unsigned short)60850;
signed char var_17 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
