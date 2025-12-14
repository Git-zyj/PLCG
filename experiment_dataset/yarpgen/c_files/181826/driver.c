#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12439230320016364345ULL;
long long int var_9 = 1469233421823099053LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1414606496U;
long long int var_18 = 5360772822481529760LL;
void init() {
}

void checksum() {
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
