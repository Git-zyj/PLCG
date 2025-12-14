#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8195939770339070523ULL;
unsigned long long int var_2 = 6851033818357219231ULL;
long long int var_3 = 7422532119520767258LL;
unsigned long long int var_8 = 1191626160000458312ULL;
int zero = 0;
signed char var_15 = (signed char)59;
short var_16 = (short)11456;
unsigned int var_17 = 268698387U;
signed char var_18 = (signed char)-51;
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
