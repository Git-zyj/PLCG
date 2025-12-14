#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-13736;
int var_9 = -86943663;
_Bool var_14 = (_Bool)1;
unsigned int var_18 = 2914371260U;
int zero = 0;
unsigned char var_19 = (unsigned char)69;
unsigned char var_20 = (unsigned char)66;
unsigned char var_21 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
