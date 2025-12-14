#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2610583895U;
unsigned int var_5 = 2813363742U;
unsigned char var_9 = (unsigned char)70;
short var_12 = (short)12652;
signed char var_13 = (signed char)1;
unsigned long long int var_14 = 11998332522447524789ULL;
int zero = 0;
unsigned int var_16 = 796463730U;
long long int var_17 = 9052354744241488246LL;
void init() {
}

void checksum() {
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
