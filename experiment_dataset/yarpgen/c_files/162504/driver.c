#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
signed char var_9 = (signed char)-69;
unsigned int var_11 = 80774948U;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-22;
signed char var_14 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
