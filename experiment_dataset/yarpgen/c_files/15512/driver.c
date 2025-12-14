#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3286565990U;
signed char var_4 = (signed char)96;
unsigned char var_7 = (unsigned char)164;
int zero = 0;
long long int var_10 = 4694013724987759598LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
