#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-19961;
unsigned int var_8 = 3721256416U;
unsigned long long int var_9 = 6839757673383564298ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 3916148268U;
unsigned long long int var_13 = 15440201869817539925ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
