#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 14770701680396103739ULL;
long long int var_7 = 1116079537699196963LL;
unsigned long long int var_9 = 2284239698272449799ULL;
unsigned int var_13 = 1409668155U;
int zero = 0;
unsigned int var_18 = 4271311654U;
unsigned int var_19 = 2477398081U;
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
