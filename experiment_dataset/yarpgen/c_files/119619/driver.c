#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)96;
unsigned int var_9 = 536109431U;
int zero = 0;
unsigned int var_12 = 1565218731U;
int var_13 = -448433751;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1825399317U;
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
