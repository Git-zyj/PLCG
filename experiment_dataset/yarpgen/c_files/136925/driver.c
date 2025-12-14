#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4665803544230848723ULL;
_Bool var_8 = (_Bool)1;
long long int var_11 = 6822449728300057053LL;
int zero = 0;
unsigned long long int var_13 = 7717446895436176761ULL;
unsigned int var_14 = 2008021563U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
