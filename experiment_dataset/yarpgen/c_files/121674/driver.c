#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-90;
unsigned int var_10 = 678711340U;
int zero = 0;
unsigned long long int var_15 = 7675833670596180273ULL;
short var_16 = (short)4591;
unsigned long long int var_17 = 10393998463829094072ULL;
unsigned int var_18 = 2365879348U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
