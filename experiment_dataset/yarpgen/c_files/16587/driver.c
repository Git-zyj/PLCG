#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_7 = 1673835262304584350ULL;
unsigned int var_11 = 2181054098U;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 6066536696986569596LL;
unsigned long long int var_14 = 15822541756562448643ULL;
unsigned long long int var_15 = 9804649545593839791ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
