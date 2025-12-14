#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-42;
unsigned char var_7 = (unsigned char)79;
int var_9 = -52771819;
unsigned int var_10 = 4089218557U;
int zero = 0;
unsigned int var_13 = 180331390U;
short var_14 = (short)15991;
void init() {
}

void checksum() {
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
