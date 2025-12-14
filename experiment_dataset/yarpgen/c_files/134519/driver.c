#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-5846;
unsigned long long int var_12 = 4100534089668318609ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4902024482816947401ULL;
unsigned int var_16 = 3193612731U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
