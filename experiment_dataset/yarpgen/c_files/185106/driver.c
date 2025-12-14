#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2371099576U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_9 = 17830218838163074075ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 768757611U;
unsigned int var_16 = 3302760675U;
int zero = 0;
long long int var_18 = 2158163207712319659LL;
long long int var_19 = -4412598684606134903LL;
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
