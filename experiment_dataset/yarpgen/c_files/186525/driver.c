#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1472448097;
unsigned char var_6 = (unsigned char)233;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1947813889U;
int zero = 0;
signed char var_13 = (signed char)109;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)32;
unsigned int var_16 = 3894805517U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
