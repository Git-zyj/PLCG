#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)27382;
unsigned int var_9 = 1292245983U;
int var_14 = 1527093171;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 665468777U;
signed char var_17 = (signed char)11;
unsigned char var_18 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
