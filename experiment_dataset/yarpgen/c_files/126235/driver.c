#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8807436463258028799LL;
signed char var_7 = (signed char)-120;
long long int var_11 = -6908681451211482923LL;
int zero = 0;
unsigned long long int var_14 = 17369519424335137543ULL;
signed char var_15 = (signed char)-51;
long long int var_16 = 566606563874311330LL;
unsigned long long int var_17 = 13218212832928428214ULL;
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
