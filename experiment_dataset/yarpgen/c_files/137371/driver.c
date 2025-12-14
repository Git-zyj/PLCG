#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25766;
unsigned int var_3 = 1799770241U;
unsigned char var_10 = (unsigned char)233;
int zero = 0;
long long int var_14 = 8011617434435965503LL;
unsigned int var_15 = 962848798U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
