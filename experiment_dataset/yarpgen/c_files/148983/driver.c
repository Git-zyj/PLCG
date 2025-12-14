#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7153735578571441923LL;
short var_1 = (short)-9397;
unsigned long long int var_4 = 12891349762355536284ULL;
unsigned int var_5 = 3334511127U;
unsigned int var_8 = 2338403076U;
long long int var_9 = -2830707152485988229LL;
long long int var_11 = -5043987556447503847LL;
int zero = 0;
unsigned int var_14 = 1032849553U;
short var_15 = (short)31303;
void init() {
}

void checksum() {
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
